/*
 * XREFs of ACPIInitReadRegistryKeys @ 0x1C00B9108
 * Callers:
 *     DriverEntry @ 0x1C00B7818 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 *     RtlStringCchPrintfA @ 0x1C000C604 (RtlStringCchPrintfA.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     OSOpenHandle @ 0x1C008D2B4 (OSOpenHandle.c)
 *     OSCloseHandle @ 0x1C0093C68 (OSCloseHandle.c)
 *     OSReadRegValue @ 0x1C00945C8 (OSReadRegValue.c)
 */

void ACPIInitReadRegistryKeys()
{
  _BYTE *v0; // rbx
  _BYTE *v1; // rdi
  int v2; // eax
  unsigned int v3; // esi
  _BYTE *PoolWithTag; // rax
  int v5; // eax
  char *v6; // rax
  __int64 v7; // rsi
  int v8; // esi
  unsigned int v9; // r14d
  _BYTE *v10; // rax
  unsigned int v11; // esi
  char *v12; // rax
  const char *v13; // r14
  unsigned int v14; // edx
  char *v15; // rcx
  char v16; // al
  unsigned __int16 v17; // r9
  int v18; // [rsp+28h] [rbp-8h]
  int v19; // [rsp+28h] [rbp-8h]
  unsigned int v20; // [rsp+60h] [rbp+30h] BYREF
  int v21; // [rsp+68h] [rbp+38h] BYREF
  void *v22; // [rsp+70h] [rbp+40h] BYREF

  v22 = 0LL;
  v0 = 0LL;
  v20 = 4;
  v21 = 0;
  v1 = 0LL;
  if ( (int)OSReadRegValue("Attributes", 0LL, &v21, &v20) >= 0 )
    AcpiOverrideAttributes |= v21 & 0xFFFEFFFF;
  AcpiProcessorString = 0LL;
  Src = 0LL;
  v2 = OSOpenHandle("\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0", 0LL, (__int64)&v22);
  if ( v2 < 0 )
  {
    v18 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0x10u,
      (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
      v18);
  }
  else
  {
    v3 = 40;
    while ( 1 )
    {
      if ( v0 )
        ExFreePoolWithTag(v0, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x53706341u);
      v0 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, v3);
      v20 = v3;
      v3 += 10;
      v5 = OSReadRegValue("Identifier", v22, v0, &v20);
      if ( v5 != -2147483643 )
      {
        if ( v5 < 0 )
        {
          v17 = 17;
LABEL_39:
          v19 = v5;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xBu,
            v17,
            (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
            v19);
        }
        else
        {
          v6 = strstr(v0, "Stepping");
          if ( v6 )
            *(v6 - 1) = 0;
          v7 = -1LL;
          do
            ++v7;
          while ( v0[v7] );
          v8 = v7 + 1;
          v9 = 10;
          while ( 1 )
          {
            if ( v1 )
              ExFreePoolWithTag(v1, 0);
            v10 = ExAllocatePoolWithTag(PagedPool, v9, 0x53706341u);
            v1 = v10;
            if ( !v10 )
              break;
            memset(v10, 0, v9);
            v20 = v9;
            v9 += 10;
            v5 = OSReadRegValue("VendorIdentifier", v22, v1, &v20);
            if ( v5 != -2147483643 )
            {
              if ( v5 < 0 )
              {
                v17 = 18;
                goto LABEL_39;
              }
              v11 = v20 + 2 + v8;
              v12 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x53706341u);
              v13 = v12;
              if ( v12 )
              {
                RtlStringCchPrintfA(v12, v11, "%s - %s", v1, v0);
                v14 = 0;
                if ( v11 )
                {
                  v15 = (char *)v13;
                  do
                  {
                    v16 = *v15;
                    if ( !*v15 )
                      break;
                    if ( v16 < 32 || v16 == 44 )
                      *v15 = 32;
                    ++v14;
                    ++v15;
                  }
                  while ( v14 < v11 );
                }
                Src = v13;
                WORD1(AcpiProcessorString) = v11;
                LOWORD(AcpiProcessorString) = v11;
              }
              goto LABEL_28;
            }
          }
        }
        break;
      }
    }
LABEL_28:
    if ( v22 )
      OSCloseHandle(v22);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}
