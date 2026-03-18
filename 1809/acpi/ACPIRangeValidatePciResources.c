/*
 * XREFs of ACPIRangeValidatePciResources @ 0x1C002A7FC
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C0098CC0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0099070 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     ACPIRangeValidatePciMemoryResource @ 0x1C002A96C (ACPIRangeValidatePciMemoryResource.c)
 *     ACPIIgnoreResourceMapValidation @ 0x1C005B824 (ACPIIgnoreResourceMapValidation.c)
 *     WPP_RECORDER_SF_dDDL @ 0x1C005BA64 (WPP_RECORDER_SF_dDDL.c)
 *     WPP_RECORDER_SF_diiii @ 0x1C005BF88 (WPP_RECORDER_SF_diiii.c)
 */

void __fastcall ACPIRangeValidatePciResources(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned __int64 a3)
{
  int v5; // edi
  ULONG_PTR v6; // rbx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rsi
  char v11; // cl
  ULONGLONG v12; // rax
  int v13; // edx
  ULONGLONG v14; // r12
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  char v18; // cl
  int v19; // r15d
  int v20; // r9d
  int BugCheckParameter4; // [rsp+20h] [rbp-48h]
  unsigned __int64 MinimumAddress; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 Alignment; // [rsp+58h] [rbp-10h] BYREF
  int v25; // [rsp+B8h] [rbp+50h] BYREF
  int v26; // [rsp+C0h] [rbp+58h]
  unsigned __int64 MaximumAddress; // [rsp+C8h] [rbp+60h] BYREF

  v25 = 0;
  v5 = 0;
  if ( !BugCheckParameter3 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xDu,
      0xFu,
      (__int64)&WPP_188439d352933c43d81bb97719738185_Traceguids);
    KeBugCheckEx(0xA5u, 2uLL, BugCheckParameter2, 2uLL, 0LL);
  }
  v6 = BugCheckParameter3 + 32;
  v7 = 0;
  v26 = 0;
  if ( *(_DWORD *)(BugCheckParameter3 + 28) )
  {
    do
    {
      v8 = *(_DWORD *)(v6 + 4);
      v9 = 0;
      if ( v8 )
      {
        do
        {
          v10 = 32LL * v9;
          v11 = *(_BYTE *)(v10 + v6 + 9);
          if ( ((v11 - 1) & 0xF9) == 0 && v11 != 5 )
          {
            v12 = RtlIoDecodeMemIoResource(
                    (PIO_RESOURCE_DESCRIPTOR)(v10 + v6 + 8),
                    &Alignment,
                    &MinimumAddress,
                    &MaximumAddress);
            a3 = MaximumAddress;
            v14 = v12;
            v15 = MinimumAddress;
            v16 = MaximumAddress - MinimumAddress + 1;
            if ( v16 > 0xFFFFFFFF && *(_BYTE *)(v10 + v6 + 9) != 7 )
            {
              WPP_RECORDER_SF_diiii(
                WPP_GLOBAL_Control->DeviceExtension,
                v13,
                MaximumAddress,
                16,
                BugCheckParameter4,
                v9,
                MinimumAddress,
                MaximumAddress,
                MaximumAddress - MinimumAddress + 1,
                *(_DWORD *)(v10 + v6 + 20));
              a3 = MaximumAddress;
              ++v5;
              v15 = MinimumAddress;
            }
            if ( v16 != v14 )
            {
              WPP_RECORDER_SF_diiii(
                WPP_GLOBAL_Control->DeviceExtension,
                v13,
                a3,
                17,
                BugCheckParameter4,
                v9,
                v15,
                a3,
                v14,
                Alignment);
              a3 = MaximumAddress;
              ++v5;
              v15 = MinimumAddress;
            }
            v17 = Alignment;
            if ( !Alignment )
            {
              WPP_RECORDER_SF_diiii(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                a3,
                18,
                BugCheckParameter4,
                v9,
                v15,
                a3,
                v14,
                0);
              a3 = MaximumAddress;
              ++v5;
              v15 = MinimumAddress;
              v17 = Alignment;
            }
            if ( ((v17 - 1) & v15) != 0 )
            {
              WPP_RECORDER_SF_diiii(
                WPP_GLOBAL_Control->DeviceExtension,
                v17,
                a3,
                19,
                BugCheckParameter4,
                v9,
                v15,
                a3,
                v14,
                v17);
              ++v5;
            }
          }
          v18 = *(_BYTE *)(v10 + v6 + 9);
          if ( v18 == 6 )
          {
            a3 = *(unsigned int *)(v10 + v6 + 20);
            v20 = *(_DWORD *)(v10 + v6 + 16);
            if ( *(_DWORD *)(v10 + v6 + 24) - (_DWORD)a3 + 1 != v20 )
            {
              WPP_RECORDER_SF_dDDL(
                WPP_GLOBAL_Control->DeviceExtension,
                *(_DWORD *)(v10 + v6 + 24),
                a3,
                v20,
                BugCheckParameter4,
                v9,
                a3,
                *(_DWORD *)(v10 + v6 + 24),
                *(_DWORD *)(v10 + v6 + 16));
              v18 = *(_BYTE *)(v10 + v6 + 9);
              ++v5;
            }
          }
          if ( ((v18 - 3) & 0xFB) == 0 )
          {
            ACPIRangeValidatePciMemoryResource(v6, v9, a3, &v25);
            v19 = v25;
            if ( v25 )
            {
              if ( (unsigned __int8)ACPIIgnoreResourceMapValidation(v10 + v6 + 8) )
                v19 = 0;
              v25 = v19;
            }
            v5 += v19;
          }
          v8 = *(_DWORD *)(v6 + 4);
          ++v9;
        }
        while ( v9 < v8 );
        v7 = v26;
      }
      v26 = ++v7;
      v6 += 32 * v8 + 8;
    }
    while ( v7 < *(_DWORD *)(BugCheckParameter3 + 28) );
    if ( v5 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x15u,
        (__int64)&WPP_188439d352933c43d81bb97719738185_Traceguids);
      KeBugCheckEx(0xA5u, 2uLL, BugCheckParameter2, BugCheckParameter3, E820Info);
    }
  }
}
