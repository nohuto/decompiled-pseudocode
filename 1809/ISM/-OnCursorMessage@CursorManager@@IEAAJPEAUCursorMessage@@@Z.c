/*
 * XREFs of ?OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x1800D9B38
 * Callers:
 *     ?OnCoreMessageStatic@CursorManager@@SAJPEAX0H@Z @ 0x1800D9B20 (-OnCoreMessageStatic@CursorManager@@SAJPEAX0H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CursorManager::OnCursorMessage(CursorManager *this, struct CursorMessage *a2)
{
  struct CursorMessage *v2; // rbx
  __int64 v4; // r8
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // r14
  __int64 v12; // r8
  __int128 v13; // xmm0
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r8
  int v17; // edi
  __int64 v18; // rdx
  __int128 v19; // xmm0
  __int64 v20; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 (__fastcall ***v27)(_QWORD, __int128 *, __int128 *); // rcx
  __int64 v28; // xmm1_8
  __int128 v29; // xmm0
  __int64 (__fastcall **v30)(_QWORD, __int128 *, __int128 *); // rax
  __int128 v31; // [rsp+20h] [rbp-30h] BYREF
  __int128 v32; // [rsp+30h] [rbp-20h] BYREF
  __int64 v33; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v35; // [rsp+78h] [rbp+28h]

  v2 = a2;
  switch ( *(_BYTE *)a2 )
  {
    case 0:
      v27 = (__int64 (__fastcall ***)(_QWORD, __int128 *, __int128 *))*((_QWORD *)this + 7);
      v28 = *((_QWORD *)a2 + 5);
      v32 = *(_OWORD *)((char *)a2 + 24);
      v29 = *(_OWORD *)((char *)a2 + 8);
      v30 = *v27;
      v33 = v28;
      v31 = v29;
      v5 = (*v30)(v27, &v31, &v32);
      if ( v5 < 0 )
      {
        v6 = 176LL;
        goto LABEL_35;
      }
      return 0LL;
    case 1:
      v25 = *((_QWORD *)this + 7);
      v26 = *((unsigned int *)a2 + 6);
      v31 = *(_OWORD *)((char *)a2 + 8);
      v5 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v25 + 8LL))(v25, &v31, v26);
      if ( v5 < 0 )
      {
        v6 = 180LL;
        goto LABEL_35;
      }
      return 0LL;
    case 2:
      v23 = *((_QWORD *)this + 7);
      v24 = *((_QWORD *)a2 + 3);
      v31 = *(_OWORD *)((char *)a2 + 8);
      v5 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v23 + 24LL))(v23, &v31, v24);
      if ( v5 < 0 )
      {
        v6 = 184LL;
        goto LABEL_35;
      }
      return 0LL;
  }
  v4 = (unsigned int)*(unsigned __int8 *)a2 - 3;
  switch ( *(_BYTE *)a2 )
  {
    case 3:
      v22 = *((_QWORD *)this + 7);
      LODWORD(v4) = *((unsigned __int8 *)a2 + 24);
      v31 = *(_OWORD *)((char *)a2 + 8);
      v5 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v22 + 16LL))(v22, &v31, v4);
      if ( v5 < 0 )
      {
        v6 = 188LL;
        goto LABEL_35;
      }
      return 0LL;
    case 6:
      if ( (*((_BYTE *)a2 + 24) & 8) != 0 )
      {
        v12 = v35;
        v11 = v35;
      }
      else
      {
        v11 = 1;
        v12 = 32512LL;
      }
      v13 = *(_OWORD *)((char *)a2 + 8);
      *((_QWORD *)a2 + 3) = v12;
      v14 = *((_QWORD *)this + 7);
      v31 = v13;
      v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 24LL))(v14, &v31);
      v17 = v15;
      if ( v15 >= 0 )
      {
        v19 = *(_OWORD *)((char *)v2 + 8);
        *((_BYTE *)v2 + 24) = v11;
        v20 = *((_QWORD *)this + 7);
        LOBYTE(v16) = v11;
        v31 = v19;
        v15 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v20 + 16LL))(v20, &v31, v16);
        v17 = v15;
        if ( v15 >= 0 )
        {
          v17 = 0;
LABEL_25:
          if ( v17 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xC4,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
              (const char *)(unsigned int)v17);
            return (unsigned int)v17;
          }
          return 0LL;
        }
        v18 = 227LL;
      }
      else
      {
        v18 = 224LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_25;
    case 7:
      v9 = *((_QWORD *)this + 7);
      v10 = *((unsigned int *)a2 + 6);
      v31 = *(_OWORD *)((char *)a2 + 8);
      v5 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v9 + 32LL))(v9, &v31, v10);
      if ( v5 < 0 )
      {
        v6 = 192LL;
        goto LABEL_35;
      }
      break;
    case 9:
      LOBYTE(a2) = *((_BYTE *)a2 + 24);
      v5 = (*(__int64 (__fastcall **)(_QWORD, struct CursorMessage *))(**((_QWORD **)this + 7) + 40LL))(
             *((_QWORD *)this + 7),
             a2);
      if ( v5 < 0 )
      {
        v6 = 200LL;
        goto LABEL_35;
      }
      break;
    case 0xA:
      v7 = *((_QWORD *)this + 7);
      v8 = *((unsigned int *)a2 + 6);
      v31 = *(_OWORD *)((char *)a2 + 8);
      v5 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v7 + 48LL))(v7, &v31, v8);
      if ( v5 < 0 )
      {
        v6 = 204LL;
        goto LABEL_35;
      }
      break;
    default:
      v5 = -2147418113;
      v6 = 208LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
  }
  return 0LL;
}
