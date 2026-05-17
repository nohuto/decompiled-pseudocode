/*
 * XREFs of RtlQueryInformationActivationContext @ 0x1800376A0
 * Callers:
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     sub_180037DCC @ 0x180037DCC (sub_180037DCC.c)
 *     sub_18007A604 @ 0x18007A604 (sub_18007A604.c)
 *     RtlQueryInformationActiveActivationContext @ 0x18007F820 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 *     sub_180075F10 @ 0x180075F10 (sub_180075F10.c)
 *     sub_180076000 @ 0x180076000 (sub_180076000.c)
 *     sub_180076258 @ 0x180076258 (sub_180076258.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800DEB44 @ 0x1800DEB44 (sub_1800DEB44.c)
 *     sub_1800DEDD4 @ 0x1800DEDD4 (sub_1800DEDD4.c)
 *     sub_1800DF058 @ 0x1800DF058 (sub_1800DF058.c)
 */

__int64 __fastcall RtlQueryInformationActivationContext(
        int a1,
        volatile signed __int32 *a2,
        _DWORD *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  volatile signed __int32 *v8; // rdi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  struct _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  const char *v13; // rdx
  const char *v14; // r10
  __int64 v15; // rcx
  int v16; // ebx
  int v17; // ecx
  bool v18; // sf
  int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  signed __int32 v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // eax
  int v29; // [rsp+30h] [rbp-98h]
  __int64 v30; // [rsp+38h] [rbp-90h] BYREF
  __int64 v31; // [rsp+40h] [rbp-88h]
  const char *v32; // [rsp+48h] [rbp-80h]
  int v33; // [rsp+50h] [rbp-78h] BYREF
  int v34; // [rsp+54h] [rbp-74h]
  __int128 v35; // [rsp+58h] [rbp-70h] BYREF
  __int64 v36; // [rsp+68h] [rbp-60h]
  struct _TEB *v37; // [rsp+70h] [rbp-58h]
  struct _TEB *v38; // [rsp+78h] [rbp-50h]
  _DWORD v39[8]; // [rsp+80h] [rbp-48h] BYREF
  volatile signed __int32 *v40; // [rsp+D8h] [rbp+10h]

  v40 = a2;
  v8 = a2;
  memset(v39, 0, sizeof(v39));
  v30 = 0LL;
  v39[6] = 4;
  if ( a7 )
    *a7 = 0LL;
  if ( (a1 & 0x3FFFFFF8) != 0 )
    goto LABEL_84;
  if ( a1 < 0 && (((a4 - 1) & 0xFFFFFFFA) != 0 || a4 == 2) )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1,
      a4);
LABEL_77:
    v16 = -1073741585;
    goto LABEL_123;
  }
  if ( (unsigned int)(a4 - 1) > 6 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      a4);
    v16 = -1073741583;
    goto LABEL_123;
  }
  if ( a6 )
  {
    if ( !a5 )
    {
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      v16 = -1073741582;
      goto LABEL_123;
    }
  }
  else if ( !a7 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    v16 = -1073741580;
    goto LABEL_123;
  }
  if ( (a1 & 7) != 0 )
  {
    switch ( a1 & 7 )
    {
      case 1:
        if ( !v8 )
        {
          v38 = NtCurrentTeb();
          ActivationContextStackPointer = v38->ActivationContextStackPointer;
          if ( !ActivationContextStackPointer->ActiveFrame )
          {
            v8 = v40;
            goto LABEL_13;
          }
          v8 = (volatile signed __int32 *)*((_QWORD *)ActivationContextStackPointer->ActiveFrame + 1);
          goto LABEL_52;
        }
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - caller asked to use active activation context but passed %p\n",
          "RtlQueryInformationActivationContext",
          (const void *)v8);
        goto LABEL_90;
      case 2:
LABEL_47:
        if ( v8 )
        {
          v20 = sub_18001869C((unsigned __int64)v8, &v30, &v33);
          v16 = v20;
          v29 = v20;
          if ( v20 >= 0 && v33 < 5 )
          {
            v37 = NtCurrentTeb();
            if ( (v37->SameTebFlags & 0x1000) != 0 )
            {
              v16 = v20;
            }
            else
            {
              sub_18002E73C(0);
              v26 = *(_QWORD *)(v30 + 152);
              v27 = v29;
              if ( *(_DWORD *)(v26 + 56) != 9 )
                v27 = -1073741515;
              v16 = v27;
              sub_180073E1C(v26, v23, v24, v25);
            }
            v8 = v40;
          }
          if ( v16 < 0 )
          {
            DbgPrintEx(
              51LL,
              0LL,
              "SXS: %s() - Caller passed invalid hmodule (%p)\n",
              "RtlQueryInformationActivationContext",
              (const void *)v8);
            goto LABEL_123;
          }
          v8 = *(volatile signed __int32 **)(v30 + 136);
LABEL_52:
          v40 = v8;
          goto LABEL_13;
        }
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
          "RtlQueryInformationActivationContext");
LABEL_90:
        v16 = -1073741584;
        goto LABEL_123;
      case 4:
        if ( !v8 )
        {
          DbgPrintEx(
            51LL,
            0LL,
            "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
            "RtlQueryInformationActivationContext");
          goto LABEL_90;
        }
        if ( (unsigned __int64)v8 < *((_QWORD *)&xmmword_18017A4E0 + 1)
          || (unsigned __int64)v8 >= *((_QWORD *)&xmmword_18017A4E0 + 1)
                                   + (unsigned __int64)(unsigned int)qword_18017A4F0 )
        {
          sub_18001E620((unsigned __int64)v8, (signed __int64)&v35, v10, v11);
        }
        else
        {
          v35 = xmmword_18017A4E0;
          v36 = qword_18017A4F0;
        }
        if ( !*((_QWORD *)&v35 + 1) )
        {
          DbgPrintEx(
            51LL,
            0LL,
            "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
            "RtlQueryInformationActivationContext",
            (const void *)v8);
          v16 = -1073741515;
          goto LABEL_123;
        }
        v8 = (volatile signed __int32 *)*((_QWORD *)&v35 + 1);
        v40 = (volatile signed __int32 *)*((_QWORD *)&v35 + 1);
        goto LABEL_47;
    }
LABEL_84:
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1);
    goto LABEL_77;
  }
LABEL_13:
  v13 = (const char *)((unsigned __int64)v39 & -(__int64)((a1 & 0x40000000) != 0));
  v14 = 0LL;
  v32 = 0LL;
  v15 = 0LL;
  v31 = 0LL;
  if ( v8 )
  {
    v13 = "Actx ";
    if ( v8 == (volatile signed __int32 *)-4LL )
    {
      v15 = 776LL;
      v31 = 776LL;
      goto LABEL_17;
    }
    if ( v8 == (volatile signed __int32 *)-3LL )
    {
      v14 = "Actx ";
      v32 = "Actx ";
    }
    else
    {
      v14 = (const char *)*((_QWORD *)v8 + 3);
      v32 = v14;
    }
    goto LABEL_58;
  }
  if ( v13 )
  {
    v21 = *(_DWORD *)(((unsigned __int64)v39 & -(__int64)((a1 & 0x40000000) != 0)) + 0x18) & 7;
    if ( v21 <= 1 )
    {
      v15 = 760LL;
      v31 = 760LL;
    }
    else if ( v21 != 4 )
    {
      if ( v21 != 2 )
      {
        v16 = -1073741584;
        goto LABEL_21;
      }
      v15 = 776LL;
      goto LABEL_16;
    }
    v13 = "Actx ";
LABEL_58:
    if ( !v15 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v15 = 760LL;
LABEL_16:
  v31 = v15;
  v13 = "Actx ";
LABEL_17:
  v14 = *(const char **)(&NtCurrentPeb()->InheritedAddressSpace + v15);
  v32 = v14;
  v8 = v40;
LABEL_18:
  if ( v14 )
    v13 = v14;
  v14 = v13;
  v32 = v13;
  v16 = 0;
LABEL_21:
  if ( v16 < 0 )
    goto LABEL_123;
  if ( !v14 && (unsigned int)(a4 - 2) <= 5 )
    goto LABEL_77;
  v17 = a4 - 1;
  switch ( a4 )
  {
    case 1:
      v34 &= v17;
      if ( a1 < 0 )
        v17 = 1;
      v34 = v17;
      if ( a7 )
        *a7 = 0LL;
      if ( a6 < 0x10 )
      {
        if ( a7 )
          *a7 = 16LL;
        v16 = -1073741789;
      }
      else
      {
        if ( v14 )
          *(_DWORD *)(a5 + 8) = *((_DWORD *)v14 + 7);
        else
          *(_DWORD *)(a5 + 8) = 0;
        if ( (v17 & 1) == 0 && v8 && (((unsigned __int64)v8 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && *v8 != 0x7FFFFFFF )
        {
          do
          {
            if ( *v8 == 0x7FFFFFFF )
              break;
            v22 = *v8;
          }
          while ( v22 != _InterlockedCompareExchange(v8, v22 + 1, v22) );
        }
        *(_QWORD *)a5 = v8;
        if ( a7 )
          *a7 = 16LL;
        v16 = 0;
      }
      v18 = v16 < 0;
LABEL_37:
      if ( v18 )
        break;
      goto LABEL_38;
    case 2:
      v19 = sub_180076000((_DWORD)v14, (_DWORD)v13, a5, a6, (__int64)a7);
      goto LABEL_45;
    case 3:
      if ( a3 )
      {
        v19 = sub_1800DEB44((_DWORD)v14, *a3, a5, a6, (__int64)a7);
        goto LABEL_45;
      }
LABEL_116:
      v16 = -1073741811;
      break;
    case 4:
      if ( a3 )
      {
        v19 = sub_1800DEDD4((_DWORD)v14, (_DWORD)a3, a5, a6, (__int64)a7);
        goto LABEL_45;
      }
      goto LABEL_116;
    case 5:
      if ( a6 >= 0xC )
      {
        *(_QWORD *)a5 = 0LL;
        *(_DWORD *)(a5 + 8) = 0;
        v16 = sub_180075F10((unsigned int)(a4 - 5), v14, a5);
        if ( v16 < 0 )
          break;
        if ( a7 )
          *a7 = 12LL;
LABEL_38:
        v16 = 0;
        break;
      }
      v16 = -1073741789;
      if ( a7 )
        *a7 = 12LL;
      break;
    case 6:
      v19 = sub_180076258(v14, a5, a6, a7);
LABEL_45:
      v16 = v19;
      v18 = v19 < 0;
      goto LABEL_37;
    case 7:
      v19 = sub_1800DF058(v14, a5, a6, a7);
      goto LABEL_45;
    default:
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        a4);
      v16 = -1073741595;
      break;
  }
LABEL_123:
  if ( v30 )
    sub_18001B678(v30);
  return (unsigned int)v16;
}
