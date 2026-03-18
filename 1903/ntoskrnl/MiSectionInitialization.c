/*
 * XREFs of MiSectionInitialization @ 0x140A1EFF8
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObInsertObject @ 0x1405D9570 (ObInsertObject.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     ObCreateObject @ 0x14068E010 (ObCreateObject.c)
 *     ObCreateObjectType @ 0x140759A60 (ObCreateObjectType.c)
 */

__int64 MiSectionInitialization()
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v1; // rbx
  _QWORD *v2; // rcx
  UNICODE_STRING v4; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v5[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v6[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v7; // [rsp+78h] [rbp-88h]
  _QWORD *v8; // [rsp+80h] [rbp-80h]
  int v9; // [rsp+88h] [rbp-78h]
  int v10; // [rsp+8Ch] [rbp-74h]
  __int128 v11; // [rsp+90h] [rbp-70h]
  _QWORD v12[16]; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Object; // [rsp+130h] [rbp+30h] BYREF

  v6[1] = 0;
  v10 = 0;
  dword_14046682C = -1;
  qword_140464588 = 0LL;
  v4.Buffer = L"Section";
  *(_QWORD *)&v4.Length = 1048590LL;
  v5[1] = L"\\Device\\PhysicalMemory";
  v5[0] = 3014700LL;
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
      memset(&qword_1404645B0, 0, 0x110uLL);
      v1[5] = 0LL;
      dword_140464678 |= 0x400u;
      v7 = 0LL;
      v8 = v5;
      qword_1404645B0 = (__int64)&qword_140464640;
      qword_140464640 = (__int64)v1;
      qword_140464658 = 1LL;
      *v1 = &qword_140464640;
      v6[0] = 48;
      v9 = 65552;
      v11 = 0LL;
      if ( (int)ObCreateObject(0, MmSectionObjectType, (int)v6, 0, 0, 64, 64, 0, &Object) < 0 )
      {
        ExFreePoolWithTag(v1, 0);
      }
      else
      {
        v2 = Object;
        *((_QWORD *)Object + 5) = &qword_140464640;
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
