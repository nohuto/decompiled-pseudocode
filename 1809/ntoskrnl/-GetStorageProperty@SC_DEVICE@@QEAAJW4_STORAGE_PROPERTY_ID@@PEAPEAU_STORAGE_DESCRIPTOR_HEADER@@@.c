/*
 * XREFs of ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140168AC8
 * Callers:
 *     ?UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z @ 0x140168A74 (-UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406C3B20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1407061C8 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_DEVICE::GetStorageProperty(
        SC_DEVICE *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER **a3)
{
  __int64 v4; // rax
  int v6; // esi
  SIZE_T Size; // rdi
  struct _STORAGE_DESCRIPTOR_HEADER *v8; // rax
  struct _STORAGE_DESCRIPTOR_HEADER *v9; // rbx
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v12[4]; // [rsp+48h] [rbp-30h] BYREF

  *a3 = 0LL;
  v4 = *(_QWORD *)this;
  LODWORD(NumberOfBytes) = 0;
  v6 = (*(__int64 (__fastcall **)(SC_DEVICE *, __int64, SIZE_T *))(v4 + 32))(this, 6LL, &NumberOfBytes);
  if ( v6 >= 0 )
  {
    v12[1] = 0;
    Size = (unsigned int)NumberOfBytes;
    v12[0] = 6;
    while ( 1 )
    {
      v8 = (struct _STORAGE_DESCRIPTOR_HEADER *)SC_ENV::Allocate(Size);
      v9 = v8;
      if ( !v8 )
      {
        v6 = -1073741670;
        goto LABEL_5;
      }
      v6 = (*(__int64 (__fastcall **)(SC_DEVICE *, __int64, _DWORD *, __int64, struct _STORAGE_DESCRIPTOR_HEADER *, _DWORD))(*(_QWORD *)this + 16LL))(
             this,
             2954240LL,
             v12,
             12LL,
             v8,
             Size);
      if ( v6 < 0 )
        goto LABEL_5;
      if ( v9->Size <= (unsigned int)Size )
        break;
      Size = v9->Size;
      SC_ENV::Free(v9);
    }
    v9->Size = Size;
    v6 = (*(__int64 (__fastcall **)(SC_DEVICE *, __int64, struct _STORAGE_DESCRIPTOR_HEADER *))(*(_QWORD *)this + 40LL))(
           this,
           6LL,
           v9);
    if ( v6 >= 0 )
    {
      *a3 = v9;
      v9 = 0LL;
    }
LABEL_5:
    if ( v9 )
      SC_ENV::Free(v9);
  }
  return (unsigned int)v6;
}
