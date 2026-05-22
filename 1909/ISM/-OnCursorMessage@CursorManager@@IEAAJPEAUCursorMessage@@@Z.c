/*
 * XREFs of ?OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x18010E658
 * Callers:
 *     ?OnCoreMessageStatic@CursorManager@@SAJPEAX0H@Z @ 0x18010E640 (-OnCoreMessageStatic@CursorManager@@SAJPEAX0H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?OnCursorTargetChanged@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x18010E828 (-OnCursorTargetChanged@CursorManager@@IEAAJPEAUCursorMessage@@@Z.c)
 */

__int64 __fastcall CursorManager::OnCursorMessage(CursorManager *this, struct CursorMessage *a2)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 (__fastcall ***v12)(_QWORD, __int128 *, __int128 *); // rcx
  __int64 v13; // xmm1_8
  __int128 v14; // xmm0
  __int64 (__fastcall **v15)(_QWORD, __int128 *, __int128 *); // rax
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  if ( *(_BYTE *)a2 )
  {
    if ( *(_BYTE *)a2 == 1 )
    {
      v10 = *((_QWORD *)this + 7);
      v11 = *((unsigned int *)a2 + 6);
      v17 = *(_OWORD *)((char *)a2 + 8);
      v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v10 + 8LL))(v10, &v17, v11);
      if ( v3 < 0 )
      {
        v4 = 183LL;
        goto LABEL_23;
      }
    }
    else if ( *(_BYTE *)a2 == 2 )
    {
      v8 = *((_QWORD *)this + 7);
      v9 = *((_QWORD *)a2 + 3);
      v17 = *(_OWORD *)((char *)a2 + 8);
      v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v8 + 24LL))(v8, &v17, v9);
      if ( v3 < 0 )
      {
        v4 = 187LL;
        goto LABEL_23;
      }
    }
    else
    {
      v2 = (unsigned int)*(unsigned __int8 *)a2 - 3;
      switch ( *(_BYTE *)a2 )
      {
        case 3:
          v7 = *((_QWORD *)this + 7);
          LODWORD(v2) = *((unsigned __int8 *)a2 + 24);
          v17 = *(_OWORD *)((char *)a2 + 8);
          v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v7 + 16LL))(v7, &v17, v2);
          if ( v3 < 0 )
          {
            v4 = 191LL;
            goto LABEL_23;
          }
          break;
        case 6:
          v3 = CursorManager::OnCursorTargetChanged(this, a2);
          if ( v3 < 0 )
          {
            v4 = 195LL;
            goto LABEL_23;
          }
          break;
        case 8:
          LOBYTE(a2) = *((_BYTE *)a2 + 24);
          v3 = (*(__int64 (__fastcall **)(_QWORD, struct CursorMessage *))(**((_QWORD **)this + 7) + 32LL))(
                 *((_QWORD *)this + 7),
                 a2);
          if ( v3 < 0 )
          {
            v4 = 199LL;
            goto LABEL_23;
          }
          break;
        case 9:
          v5 = *((_QWORD *)this + 7);
          v6 = *((unsigned int *)a2 + 6);
          v17 = *(_OWORD *)((char *)a2 + 8);
          v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v5 + 40LL))(v5, &v17, v6);
          if ( v3 < 0 )
          {
            v4 = 203LL;
            goto LABEL_23;
          }
          break;
        default:
          v3 = -2147418113;
          v4 = 207LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v4,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
            (const char *)(unsigned int)v3);
          return (unsigned int)v3;
      }
    }
  }
  else
  {
    v12 = (__int64 (__fastcall ***)(_QWORD, __int128 *, __int128 *))*((_QWORD *)this + 7);
    v13 = *((_QWORD *)a2 + 5);
    v18 = *(_OWORD *)((char *)a2 + 24);
    v14 = *(_OWORD *)((char *)a2 + 8);
    v15 = *v12;
    v19 = v13;
    v17 = v14;
    v3 = (*v15)(v12, &v17, &v18);
    if ( v3 < 0 )
    {
      v4 = 179LL;
      goto LABEL_23;
    }
  }
  return 0LL;
}
