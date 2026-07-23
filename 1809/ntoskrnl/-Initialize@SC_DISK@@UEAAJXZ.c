/*
 * XREFs of ?Initialize@SC_DISK@@UEAAJXZ @ 0x140168890
 * Callers:
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140706198 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14013B5F0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z @ 0x140168A74 (-UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z.c)
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x140168BE0 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SC_DISK::Initialize(SC_DISK *this)
{
  __int64 result; // rax
  _QWORD *v3; // rdi
  enum _STORAGE_PROPERTY_ID v4; // edx
  unsigned int v5; // eax

  result = SC_DEVICE::Initialize(this);
  if ( (int)result >= 0 )
  {
    if ( IsEqualGUID((const struct _GUID *)((char *)this + 8), &GUID_DEVCLASS_SMRDISK) )
      *((_DWORD *)this + 48) |= 1u;
    v3 = (_QWORD *)((char *)this + 200);
    result = (*(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, _QWORD, char *, int))(*(_QWORD *)this + 16LL))(
               this,
               475228LL,
               0LL,
               0LL,
               (char *)this + 200,
               8);
    if ( (int)result >= 0 )
    {
      if ( !*v3 )
        return 3221225635LL;
      result = (*(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, _QWORD, char *, int))(*(_QWORD *)this + 16LL))(
                 this,
                 458752LL,
                 0LL,
                 0LL,
                 (char *)this + 208,
                 24);
      if ( (int)result >= 0 )
      {
        v5 = *((_DWORD *)this + 57);
        if ( !v5 )
          return 3221225635LL;
        *((_DWORD *)this + 58) = v5;
        _BitScanReverse(&v5, v5);
        *((_DWORD *)this + 59) = v5;
        *((_QWORD *)this + 30) = *v3 >> *((_DWORD *)this + 59);
        result = SC_DEVICE::UpdateStorageProperty(this, v4);
        if ( (int)result < 0 )
          return 0LL;
      }
    }
  }
  return result;
}
