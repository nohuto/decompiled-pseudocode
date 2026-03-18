/*
 * XREFs of ?Initialize@SC_DISK@@UEAAJXZ @ 0x14016A480
 * Callers:
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1406EEA18 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x14016A400 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     ?UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z @ 0x14016A664 (-UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SC_DISK::Initialize(SC_DISK *this)
{
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD *v4; // rdi
  enum _STORAGE_PROPERTY_ID v5; // edx
  unsigned int v6; // eax

  result = SC_DEVICE::Initialize(this);
  if ( (int)result >= 0 )
  {
    v3 = *((_QWORD *)this + 1) - *(_QWORD *)&GUID_DEVCLASS_SMRDISK.Data1;
    if ( !v3 )
      v3 = *((_QWORD *)this + 2) - *(_QWORD *)GUID_DEVCLASS_SMRDISK.Data4;
    if ( !v3 )
      *((_DWORD *)this + 48) |= 1u;
    v4 = (_QWORD *)((char *)this + 200);
    result = (*(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, _QWORD, char *, int))(*(_QWORD *)this + 16LL))(
               this,
               475228LL,
               0LL,
               0LL,
               (char *)this + 200,
               8);
    if ( (int)result >= 0 )
    {
      if ( !*v4 )
        return 3221225635LL;
      result = (*(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, _QWORD, char *, int))(*(_QWORD *)this + 16LL))(
                 this,
                 458752LL,
                 0LL,
                 0LL,
                 (char *)this + 208,
                 24);
      if ( (int)result < 0 )
        return result;
      v6 = *((_DWORD *)this + 57);
      if ( !v6 )
        return 3221225635LL;
      _BitScanReverse(&v6, v6);
      *((_DWORD *)this + 58) = v6;
      *((_QWORD *)this + 30) = *v4 >> *((_DWORD *)this + 58);
      result = SC_DEVICE::UpdateStorageProperty(this, v5);
      if ( (int)result < 0 )
        return 0LL;
    }
  }
  return result;
}
