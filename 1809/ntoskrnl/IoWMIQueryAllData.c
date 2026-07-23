/*
 * XREFs of IoWMIQueryAllData @ 0x1407604C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     WmipQueryAllData @ 0x14059EBCC (WmipQueryAllData.c)
 */

NTSTATUS __stdcall IoWMIQueryAllData(PVOID DataBlockObject, PULONG InOutBufferSize, PVOID OutBuffer)
{
  ULONG v3; // eax
  _BYTE *v4; // rbx
  NTSTATUS AllData; // ecx
  int v7; // eax
  NTSTATUS v9; // eax
  ULONG v10[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v11[80]; // [rsp+40h] [rbp-68h] BYREF

  v3 = *InOutBufferSize;
  v4 = OutBuffer;
  if ( !OutBuffer || v3 < 0x48 )
  {
    v4 = v11;
    v3 = 72;
  }
  *((_QWORD *)v4 + 2) = 0LL;
  *((_DWORD *)v4 + 3) = 0;
  *((_DWORD *)v4 + 11) = 1;
  *(_DWORD *)v4 = 48;
  AllData = WmipQueryAllData(DataBlockObject, 0LL, 0, (__int64)v4, v3, v10);
  if ( AllData >= 0 )
  {
    v7 = *((_DWORD *)v4 + 11);
    if ( (v7 & 0x100) != 0 )
    {
      return -1073741637;
    }
    else if ( (v7 & 0x20) != 0 )
    {
      AllData = -1073741789;
      *InOutBufferSize = *((_DWORD *)v4 + 12);
    }
    else
    {
      *InOutBufferSize = v10[0];
      v9 = AllData;
      if ( v4 == v11 )
        return -1073741789;
      return v9;
    }
  }
  return AllData;
}
