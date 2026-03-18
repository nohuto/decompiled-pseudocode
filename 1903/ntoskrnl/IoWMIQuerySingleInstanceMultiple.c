/*
 * XREFs of IoWMIQuerySingleInstanceMultiple @ 0x1408EF5D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     WmipQuerySingleMultiple @ 0x1408F11D0 (WmipQuerySingleMultiple.c)
 */

NTSTATUS __stdcall IoWMIQuerySingleInstanceMultiple(
        PVOID *DataBlockObjectList,
        PUNICODE_STRING InstanceNames,
        ULONG ObjectCount,
        PULONG InOutBufferSize,
        PVOID OutBuffer)
{
  _BYTE *v5; // rbx
  ULONG v10; // r9d
  NTSTATUS SingleMultiple; // edx
  ULONG v13; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v14[56]; // [rsp+58h] [rbp-70h] BYREF

  v5 = OutBuffer;
  memset(v14, 0, sizeof(v14));
  if ( !DataBlockObjectList || !InstanceNames || !ObjectCount || !InOutBufferSize )
    return -1073741811;
  v10 = *InOutBufferSize;
  if ( !OutBuffer || v10 < 0x38 )
  {
    v5 = v14;
    v10 = 56;
  }
  SingleMultiple = WmipQuerySingleMultiple(
                     0,
                     0,
                     (_DWORD)v5,
                     v10,
                     0LL,
                     ObjectCount,
                     (__int64)DataBlockObjectList,
                     (__int64)InstanceNames,
                     (__int64)&v13);
  if ( SingleMultiple >= 0 )
  {
    if ( (*((_DWORD *)v5 + 11) & 0x20) != 0 )
    {
      *InOutBufferSize = *((_DWORD *)v5 + 12);
    }
    else
    {
      *InOutBufferSize = v13;
      if ( v5 != v14 )
        return SingleMultiple;
    }
    return -1073741789;
  }
  return SingleMultiple;
}
