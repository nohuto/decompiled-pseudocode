/*
 * XREFs of xxxGetComboBoxInfo @ 0x1C0152CA4
 * Callers:
 *     NtUserGetComboBoxInfo @ 0x1C0152A60 (NtUserGetComboBoxInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C0152DA8 (unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxGetComboBoxInfo(__int64 *BugCheckParameter2, __int64 a2)
{
  __int64 *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 *v11; // rdi
  PRKPROCESS *v13; // r14
  ULONG64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edx
  int v29; // ecx
  _OWORD v30[8]; // [rsp+70h] [rbp-88h] BYREF
  int v31; // [rsp+100h] [rbp+8h]

  v4 = 0LL;
  LODWORD(v30[0]) = 64;
  memset((char *)v30 + 4, 0, 0x3CuLL);
  v8 = 0;
  if ( BugCheckParameter2 )
  {
    v9 = BugCheckParameter2[5];
    v10 = 674LL;
    if ( (*(_WORD *)(v9 + 42) & 0x3FFF) == 0x2A2
      || (v5 = **(unsigned __int16 **)(BugCheckParameter2[17] + 8), v10 = gpsi, (_WORD)v5 == *(_WORD *)(gpsi + 878LL)) )
    {
      if ( *(_DWORD *)(v9 + 252) )
        v11 = (__int64 *)BugCheckParameter2[35];
      else
        v11 = *(__int64 **)(v9 + 296);
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
      goto LABEL_12;
  }
  else
  {
    v11 = 0LL;
  }
  v4 = (__int64 *)unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(BugCheckParameter2);
  if ( !v4 )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout(
             BugCheckParameter2,
             0x164u,
             0LL,
             (struct _LARGE_STRING *)a2,
             0,
             0,
             0LL,
             1u,
             1);
  }
LABEL_12:
  if ( *(_DWORD *)a2 != 64 )
  {
    UserSetLastError(87LL, v5, v6, v7);
    return 0LL;
  }
  v13 = *(PRKPROCESS **)(BugCheckParameter2[2] + 416);
  if ( v13 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v10, v5) )
  {
    v31 = 0;
  }
  else
  {
    v31 = 1;
    KeAttachProcess(*v13);
  }
  if ( v11 )
  {
    v15 = *v11;
LABEL_26:
    if ( v15 )
    {
      if ( PsGetCurrentProcessWow64Process(v14) )
        v18 = 0LL;
      else
        v18 = 3LL;
      if ( (v18 & v15) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = *(_QWORD *)v15;
      if ( PsGetCurrentProcessWow64Process(MmUserProbeAddress) )
        v20 = 0LL;
      else
        v20 = 3LL;
      if ( (v20 & v19) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = 0LL;
      if ( v19 )
        v21 = *(_QWORD *)v19;
      *((_QWORD *)&v30[2] + 1) = v21;
      v22 = *(_QWORD *)(v15 + 64);
      if ( PsGetCurrentProcessWow64Process(MmUserProbeAddress) )
        v23 = 0LL;
      else
        v23 = 3LL;
      if ( (v23 & v22) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = 0LL;
      if ( v22 )
        v24 = *(_QWORD *)v22;
      if ( v24 == *BugCheckParameter2 )
        v24 = 0LL;
      *(_QWORD *)&v30[3] = v24;
      v25 = *(_QWORD *)(v15 + 72);
      if ( PsGetCurrentProcessWow64Process(v24) )
        v26 = 0LL;
      else
        v26 = 3LL;
      if ( (v26 & v25) != 0 )
        ExRaiseDatatypeMisalignment();
      v27 = 0LL;
      if ( v25 )
        v27 = *(_QWORD *)v25;
      *((_QWORD *)&v30[3] + 1) = v27;
      *(_OWORD *)((char *)v30 + 4) = *(_OWORD *)(v15 + 16);
      *(_OWORD *)((char *)&v30[1] + 4) = *(_OWORD *)(v15 + 32);
      DWORD1(v30[2]) = 0;
      v28 = *(_DWORD *)(v15 + 80);
      v29 = 0;
      if ( (v28 & 3) == 1 )
      {
        v29 = 0x8000;
        DWORD1(v30[2]) = 0x8000;
      }
      if ( (v28 & 0x20) != 0 )
        DWORD1(v30[2]) = v29 | 8;
      *(_OWORD *)a2 = v30[0];
      *(_OWORD *)(a2 + 16) = v30[1];
      *(_OWORD *)(a2 + 32) = v30[2];
      *(_OWORD *)(a2 + 48) = v30[3];
      v8 = 1;
    }
    goto LABEL_60;
  }
  v16 = *v4;
  if ( *v4 )
  {
    if ( PsGetCurrentProcessWow64Process(v14) )
      v17 = 0LL;
    else
      v17 = 3LL;
    if ( (v17 & v16) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = MmUserProbeAddress;
    v15 = *(_QWORD *)(v16 + 144);
    goto LABEL_26;
  }
LABEL_60:
  if ( v31 )
    KeDetachProcess();
  return v8;
}
