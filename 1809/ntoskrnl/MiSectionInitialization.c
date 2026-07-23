/*
 * XREFs of MiSectionInitialization @ 0x1409BB060
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObCreateObject @ 0x1405BE820 (ObCreateObject.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     ObInsertObject @ 0x14061C280 (ObInsertObject.c)
 *     ObCreateObjectType @ 0x140729BB0 (ObCreateObjectType.c)
 */

__int64 MiSectionInitialization()
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v1; // rbx
  _QWORD *v2; // rcx
  UNICODE_STRING v4; // [rsp+50h] [rbp-B0h] BYREF
  int v5; // [rsp+60h] [rbp-A0h] BYREF
  const WCHAR *v6; // [rsp+68h] [rbp-98h]
  int v7; // [rsp+70h] [rbp-90h] BYREF
  __int64 v8; // [rsp+78h] [rbp-88h]
  int *v9; // [rsp+80h] [rbp-80h]
  int v10; // [rsp+88h] [rbp-78h]
  __int128 v11; // [rsp+90h] [rbp-70h]
  _QWORD v12[16]; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Object; // [rsp+130h] [rbp+30h] BYREF

  dword_14043BE6C = -1;
  qword_140439C88 = 0LL;
  v4.Buffer = L"Section";
  *(_DWORD *)&v4.Length = 1048590;
  v6 = L"\\Device\\PhysicalMemory";
  v5 = 3014700;
  memset(v12, 0, 0x78uLL);
  BYTE2(v12[0]) |= 4u;
  v12[7] = MiSectionOpen;
  LOWORD(v12[0]) = 120;
  v12[8] = MiSectionClose;
  LODWORD(v12[1]) = 256;
  v12[9] = MiSectionDelete;
  HIDWORD(v12[4]) = 1;
  LODWORD(v12[5]) = 64;
  HIDWORD(v12[3]) = 983071;
  *(_OWORD *)((char *)&v12[1] + 4) = MiSectionMapping;
  HIDWORD(v12[0]) = 128;
  if ( (int)ObCreateObjectType(&v4, (__int64)v12, 0LL, (__int64)&MmSectionObjectType) >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x67536D4Du);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      memset(&qword_140439CB0, 0, 0x110uLL);
      v1[5] = 0LL;
      dword_140439D78 |= 0x400u;
      v8 = 0LL;
      v9 = &v5;
      qword_140439CB0 = (__int64)&qword_140439D40;
      qword_140439D40 = (__int64)v1;
      qword_140439D58 = 1LL;
      *v1 = &qword_140439D40;
      v7 = 48;
      v10 = 65552;
      v11 = 0LL;
      if ( (int)ObCreateObject(0, (int)MmSectionObjectType, (int)&v7, 0) < 0 )
      {
        ExFreePoolWithTag(v1, 0);
      }
      else
      {
        v2 = Object;
        *((_QWORD *)Object + 5) = &qword_140439D40;
        v2[6] = 0xFFFFFFFFFFFFLL;
        *((_DWORD *)v2 + 14) = 0;
        *((_DWORD *)v2 + 15) = *((_DWORD *)v2 + 15) & 0xFFFFF000 | 0x40;
        if ( ObInsertObject(v2, 0LL, 4u, 0, 0LL, &Object) >= 0 )
        {
          ObCloseHandle(Object, 0);
          return 1LL;
        }
      }
    }
  }
  return 0LL;
}
