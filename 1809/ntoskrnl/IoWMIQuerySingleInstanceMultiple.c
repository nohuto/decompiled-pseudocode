/*
 * XREFs of IoWMIQuerySingleInstanceMultiple @ 0x1408B3370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     WmipQuerySingleMultiple @ 0x1408B4F6C (WmipQuerySingleMultiple.c)
 */

NTSTATUS __stdcall IoWMIQuerySingleInstanceMultiple(
        PVOID *DataBlockObjectList,
        PUNICODE_STRING InstanceNames,
        ULONG ObjectCount,
        PULONG InOutBufferSize,
        PVOID OutBuffer)
{
  _BYTE *v5; // rbx
  ULONG v7; // r9d
  NTSTATUS SingleMultiple; // edx
  ULONG v10; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v11[56]; // [rsp+58h] [rbp-60h] BYREF

  v5 = OutBuffer;
  if ( !DataBlockObjectList || !InstanceNames || !ObjectCount || !InOutBufferSize )
    return -1073741811;
  v7 = *InOutBufferSize;
  if ( !OutBuffer || v7 < 0x38 )
  {
    v5 = v11;
    v7 = 56;
  }
  SingleMultiple = WmipQuerySingleMultiple(
                     0,
                     0,
                     (_DWORD)v5,
                     v7,
                     0LL,
                     ObjectCount,
                     (__int64)DataBlockObjectList,
                     (__int64)InstanceNames,
                     (__int64)&v10);
  if ( SingleMultiple >= 0 )
  {
    if ( (*((_DWORD *)v5 + 11) & 0x20) != 0 )
    {
      *InOutBufferSize = *((_DWORD *)v5 + 12);
    }
    else
    {
      *InOutBufferSize = v10;
      if ( v5 != v11 )
        return SingleMultiple;
    }
    return -1073741789;
  }
  return SingleMultiple;
}
