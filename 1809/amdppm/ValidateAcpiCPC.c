/*
 * XREFs of ValidateAcpiCPC @ 0x1C002F798
 * Callers:
 *     InitAcpiCpc @ 0x1C0022250 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00017AC (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_s @ 0x1C0003D18 (WPP_RECORDER_SF_s.c)
 *     CpcRegisterIsSupported @ 0x1C0004944 (CpcRegisterIsSupported.c)
 */

__int64 __fastcall ValidateAcpiCPC(int *a1)
{
  unsigned int v1; // eax
  int v3; // edx
  bool v4; // cc
  int v5; // ebx
  _BYTE *v6; // r14
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  __int64 v9; // rbp
  char *v10; // rdx
  char v11; // al
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // r9
  int v14; // eax
  unsigned __int8 v15; // al
  _BYTE *v16; // rcx
  __int64 v17; // r10
  __int64 v19; // [rsp+28h] [rbp-30h]

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
  v6 = &CpcRegisterTable;
  v7 = 15;
  if ( v1 != 1 )
  {
    v7 = 19;
    v6 = &Cpc2RegisterTable;
  }
  v8 = 0;
  v9 = 0LL;
  do
  {
    v5 = 0;
    v10 = (char *)a1 + *(unsigned int *)&v6[v9];
    v11 = *v10;
    if ( !*v10 && !*(_QWORD *)(v10 + 4) )
    {
      if ( v6[v9 + 17] )
        goto LABEL_33;
      v5 = -1073741811;
      v12 = 53;
      goto LABEL_32;
    }
    if ( v11 == 1 )
    {
      if ( !*((_DWORD *)v10 + 2) )
      {
        v14 = *((_DWORD *)v10 + 1);
        if ( (v14 & 0xFFFF0000) == 0 )
        {
          if ( v14 )
          {
            v15 = v10[1];
            if ( v15 )
            {
              if ( v15 + (unsigned int)(unsigned __int8)v10[2] <= (unsigned __int8)v10[3] )
              {
LABEL_33:
                if ( v5 < 0 )
                  return (unsigned int)v5;
                goto LABEL_34;
              }
            }
          }
        }
      }
      v5 = -1073741811;
      v12 = 54;
LABEL_32:
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v12,
        (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
        *(const char **)&v6[v9 + 8]);
      goto LABEL_33;
    }
    if ( v11 != 10 )
    {
      if ( v11 == 126 )
      {
        if ( !v6[v9 + 16] )
        {
          v13 = 57;
          goto LABEL_40;
        }
      }
      else
      {
        if ( v11 != 127 )
        {
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x3Au,
            (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
            *(const char **)&v6[v9 + 8]);
          return (unsigned int)-1073741637;
        }
        if ( v10[3] != 64 )
        {
          v13 = 55;
          goto LABEL_40;
        }
        if ( !*(_QWORD *)(v10 + 4) )
        {
          v13 = 56;
LABEL_40:
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v13,
            (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
            *(const char **)&v6[v9 + 8]);
          return (unsigned int)-1073741811;
        }
      }
    }
LABEL_34:
    ++v8;
    v9 += 24LL;
  }
  while ( v8 < v7 );
  if ( !CpcRegisterIsSupported((__int64)(a1 + 17)) && *v16 != 126 && *((_QWORD *)a1 + 9) != v17 )
  {
    LODWORD(v19) = KeGetPcr()->Prcb.Number;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v17,
      0x34u,
      (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
      v19);
    return (unsigned int)-1073741823;
  }
  return 0;
}
