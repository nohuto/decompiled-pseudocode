/*
 * XREFs of PsCreateSiloContext @ 0x140731E90
 * Callers:
 *     CmpAllocateSiloContext @ 0x140731E20 (CmpAllocateSiloContext.c)
 *     PspAssignSiloSystemRootPath @ 0x140887DD0 (PspAssignSiloSystemRootPath.c)
 *     ObCreateSiloRootDirectory @ 0x1409071B0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 */

__int64 __fastcall PsCreateSiloContext(__int64 a1, int a2, int a3, __int64 a4, _QWORD *a5)
{
  _DWORD *v8; // rdx
  _QWORD *v9; // rbx
  int Object; // r9d
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v14; // [rsp+20h] [rbp-48h]
  _QWORD v15[3]; // [rsp+50h] [rbp-18h] BYREF
  __int16 v16; // [rsp+80h] [rbp+18h] BYREF

  if ( a3 == 1 )
  {
    v8 = PsSiloContextPagedType;
  }
  else
  {
    if ( a3 != 512 )
      return 3221225485LL;
    v8 = PsSiloContextNonPagedType;
  }
  v9 = 0LL;
  v16 = 256;
  Object = ObCreateObjectEx(0, v8, 0, 0, v14, a2, 0, 0, v15, (__int64)&v16);
  if ( Object >= 0 )
  {
    v11 = v15[0];
    if ( (*(_BYTE *)(v15[0] - 48LL + 26) & 0x40) != 0 )
      v9 = (_QWORD *)(*(_QWORD *)(v15[0] - 48LL - ObpInfoMaskToOffset[*(_BYTE *)(v15[0] - 48LL + 26) & 0x7F]) + 32LL);
    v12 = a5;
    *v9 = a1;
    v9[1] = a4;
    *v12 = v11;
  }
  return (unsigned int)Object;
}
