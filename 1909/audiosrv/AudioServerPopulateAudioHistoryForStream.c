/*
 * XREFs of AudioServerPopulateAudioHistoryForStream @ 0x1800E9400
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800E3BB0 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
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
         *(_QWORD *)(a2 + 536),
         a3,
         a4);
  v9 = v8;
  if ( v8 >= 0 )
    v9 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12E2,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v8);
  EtwEventActivityIdControl(4LL, v12);
  return v9;
}
