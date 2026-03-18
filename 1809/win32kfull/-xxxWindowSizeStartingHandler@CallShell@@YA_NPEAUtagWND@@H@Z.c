/*
 * XREFs of ?xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z @ 0x1C0222304
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E956C (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C02220E8 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 */

bool __fastcall CallShell::xxxWindowSizeStartingHandler(CallShell *this, struct tagWND *a2)
{
  __int64 v2; // rdi
  int v3; // ebx
  char v5; // r8
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  _QWORD v10[8]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *((_QWORD *)this + 2);
  v3 = (int)a2;
  memset(v10, 0, sizeof(v10));
  v10[0] = *(_QWORD *)this;
  LODWORD(v10[1]) = 2;
  HIDWORD(v10[3]) = v3;
  v5 = *(_BYTE *)(*(_QWORD *)(v2 + 432) + 232LL);
  v6 = (4 * (v5 & 1)) | 1;
  if ( (v5 & 0x10) == 0 )
    v6 = 4 * (v5 & 1);
  v7 = v6 | 2;
  if ( (v5 & 4) == 0 )
    v7 = v6;
  v8 = *((_QWORD *)this + 5);
  LODWORD(v10[4]) = v7;
  TransformRectBetweenCoordinateSpaces((char *)&v10[1] + 4, v8 + 88, *(_QWORD *)(*(_QWORD *)(v2 + 456) + 328LL), this);
  return (unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler((__int64)v10) != 0;
}
