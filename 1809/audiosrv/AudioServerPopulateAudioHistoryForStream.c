/*
 * XREFs of AudioServerPopulateAudioHistoryForStream @ 0x1800DE090
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180002EE4 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerPopulateAudioHistoryForStream(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  _BYTE v11[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v11, a1);
  v8 = (*(__int64 (__fastcall **)(char *, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 168LL))(
         a1,
         *(_QWORD *)(a2 + 504),
         a3,
         a4);
  v9 = v8;
  if ( v8 >= 0 )
    v9 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      4873LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v8);
  EtwEventActivityIdControl(4LL, v12);
  return v9;
}
