/*
 * XREFs of ValidateAcpiCPC @ 0x1C002F608
 * Callers:
 *     InitAcpiCpc @ 0x1C002D774 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0003010 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_s @ 0x1C000413C (WPP_RECORDER_SF_s.c)
 *     CpcRegisterIsSupported @ 0x1C000A3E4 (CpcRegisterIsSupported.c)
 */

__int64 __fastcall ValidateAcpiCPC(int *a1)
{
  unsigned int v1; // eax
  int v3; // edx
  bool v4; // cc
  int v5; // ebx
  const char **v6; // r14
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  char *v9; // rdx
  char v10; // al
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // r9
  int v13; // eax
  unsigned __int8 v14; // al
  _BYTE *v15; // rcx
  __int64 v17; // [rsp+28h] [rbp-40h]

  v1 = a1[1];
  if ( v1 == 1 )
  {
    v3 = *a1;
    if ( *a1 != 17 )
      goto LABEL_8;
  }
  v4 = v1 <= 2;
  if ( v1 == 2 )
  {
    v3 = *a1;
    if ( *a1 != 21 )
      goto LABEL_8;
    v4 = 1;
  }
  if ( !v4 )
  {
    v3 = *a1;
    if ( (unsigned int)*a1 < 0x15 )
    {
LABEL_8:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x33u,
          (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
          KeGetPcr()->Prcb.Number,
          v3);
      return (unsigned int)-1073741823;
    }
  }
  v6 = (const char **)&unk_1C000F1E0;
  v7 = 15;
  if ( v1 != 1 )
    v7 = 19;
  v8 = 0;
  if ( v1 != 1 )
    v6 = (const char **)&unk_1C000F010;
  do
  {
    v5 = 0;
    v9 = (char *)a1 + *((unsigned int *)v6 - 4);
    v10 = *v9;
    if ( !*v9 && !*(_QWORD *)(v9 + 4) )
    {
      if ( !*((_BYTE *)v6 + 1) )
      {
        v5 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = 53;
LABEL_38:
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v11,
            (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
            *(v6 - 1));
          goto LABEL_39;
        }
      }
      goto LABEL_39;
    }
    if ( v10 == 1 )
    {
      if ( *((_DWORD *)v9 + 2)
        || (v13 = *((_DWORD *)v9 + 1), (v13 & 0xFFFF0000) != 0)
        || !v13
        || (v14 = v9[1]) == 0
        || v14 + (unsigned int)(unsigned __int8)v9[2] > (unsigned __int8)v9[3] )
      {
        v5 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = 54;
          goto LABEL_38;
        }
      }
LABEL_39:
      if ( v5 < 0 )
        return (unsigned int)v5;
      goto LABEL_40;
    }
    if ( v10 != 10 )
    {
      if ( v10 == 126 )
      {
        if ( !*(_BYTE *)v6 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v12 = 57;
            goto LABEL_48;
          }
          return (unsigned int)-1073741811;
        }
      }
      else
      {
        if ( v10 != 127 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_s(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x3Au,
              (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
              *(v6 - 1));
          return (unsigned int)-1073741637;
        }
        if ( v9[3] != 64 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v12 = 55;
LABEL_48:
            WPP_RECORDER_SF_s(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              v12,
              (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
              *(v6 - 1));
          }
          return (unsigned int)-1073741811;
        }
        if ( !*(_QWORD *)(v9 + 4) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v12 = 56;
            goto LABEL_48;
          }
          return (unsigned int)-1073741811;
        }
      }
    }
LABEL_40:
    ++v8;
    v6 += 3;
  }
  while ( v8 < v7 );
  if ( CpcRegisterIsSupported((__int64)(a1 + 17)) || *v15 == 126 || *((_QWORD *)a1 + 9) == 1LL )
  {
    return 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = KeGetPcr()->Prcb.Number;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x34u,
        (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
        v17);
    }
    return (unsigned int)-1073741823;
  }
}
