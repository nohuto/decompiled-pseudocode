/*
 * XREFs of ValidateAcpiCPCRegister @ 0x1C002AEC0
 * Callers:
 *     ValidateAcpiCPC @ 0x1C002AD78 (ValidateAcpiCPC.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002D8C (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall ValidateAcpiCPCRegister(char *a1, char a2, char a3, const char *a4)
{
  char v4; // al
  unsigned int v5; // ebx
  unsigned __int16 v7; // r9
  int v8; // eax
  unsigned __int8 v9; // al

  v4 = *a1;
  v5 = 0;
  if ( *a1 || *(_QWORD *)(a1 + 4) )
  {
    if ( v4 == 1 )
    {
      if ( *((_DWORD *)a1 + 2)
        || (v8 = *((_DWORD *)a1 + 1), (v8 & 0xFFFF0000) != 0)
        || !v8
        || (v9 = a1[1]) == 0
        || v9 + (unsigned int)(unsigned __int8)a1[2] > (unsigned __int8)a1[3] )
      {
        v5 = -1073741811;
        v7 = 54;
        goto LABEL_22;
      }
    }
    else if ( v4 != 10 )
    {
      if ( v4 == 126 )
      {
        if ( !a2 )
        {
          v5 = -1073741811;
          v7 = 57;
          goto LABEL_22;
        }
      }
      else if ( v4 == 127 )
      {
        if ( a1[3] != 64 )
        {
          v5 = -1073741811;
          v7 = 55;
          goto LABEL_22;
        }
        if ( !*(_QWORD *)(a1 + 4) )
        {
          v5 = -1073741811;
          v7 = 56;
          goto LABEL_22;
        }
      }
      else
      {
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x3Au,
          (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
          a4);
        return (unsigned int)-1073741637;
      }
    }
  }
  else if ( !a3 )
  {
    v5 = -1073741811;
    v7 = 53;
LABEL_22:
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v7,
      (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
      a4);
  }
  return v5;
}
