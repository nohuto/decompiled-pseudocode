/*
 * XREFs of ?QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180061A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::QueryInterface(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rax
  void *v7; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  v5 = 0;
  if ( !v4 )
    goto LABEL_8;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data4;
  if ( v6 )
    v7 = 0LL;
  else
LABEL_8:
    v7 = (void *)((unsigned __int64)this & -(__int64)(this != (Microsoft::BamoImpl::ConnectionIndirector *)16));
  *a3 = v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)this - 2);
  else
    return (unsigned int)-2147467262;
  return v5;
}
