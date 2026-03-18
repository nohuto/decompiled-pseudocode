/*
 * XREFs of ACPIBusAndFilterIrpEject @ 0x1C00AD080
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C0001854 (ACPIInternalClearFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001D50 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001D70 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpEject(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // bp
  unsigned __int8 v6; // r12
  __int64 DeviceExtension; // rax
  const char *v8; // rsi
  __int64 *v9; // rbx
  int v10; // edi
  __int64 v11; // rax
  const char *v12; // rdx
  const char *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  const char *v16; // rdx
  const char *v17; // rcx
  char *IrpText; // rax
  const char *v19; // r8
  char v21; // [rsp+98h] [rbp+10h] BYREF

  v5 = a2;
  v6 = *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = byte_1C006FE7D;
  v9 = (__int64 *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 712) )
  {
    if ( *(_DWORD *)(DeviceExtension + 320) <= 1u )
    {
      ACPIInternalClearFlags((void *)(DeviceExtension + 8), 2048LL);
      ACPIGet(v9, 810173791, 277872640, v14, 4, 0LL, 0LL, 0LL, 0LL);
      v10 = ACPIGet(v9, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v21, 0LL);
      if ( v10 >= 0 && !a4 )
      {
        v15 = v9[1];
        if ( (v15 & 2) == 0 )
        {
          v16 = byte_1C006FE7D;
          v17 = byte_1C006FE7D;
          if ( (v15 & 0x200000000000LL) != 0 )
          {
            v16 = (const char *)v9[70];
            if ( (v15 & 0x400000000000LL) != 0 )
              v17 = (const char *)v9[71];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              5u,
              0xBu,
              (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
              v5,
              (char)v9,
              v16,
              v17);
          v10 = -1073741823;
        }
      }
    }
    else
    {
      v11 = *(_QWORD *)(DeviceExtension + 8);
      v12 = byte_1C006FE7D;
      v13 = byte_1C006FE7D;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v12 = (const char *)v9[70];
        if ( (v11 & 0x400000000000LL) != 0 )
          v13 = (const char *)v9[71];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0xAu,
          (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
          v5,
          (char)v9,
          v12,
          v13);
      v10 = -1073741823;
    }
  }
  else
  {
    v10 = -1073741637;
  }
  if ( (v9[1] & 0x200000000000LL) != 0 )
    v8 = (const char *)v9[70];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(0x400000000000LL, v6);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xCu,
      (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
      v5,
      IrpText,
      v10,
      (char)v9,
      v8,
      v19);
  }
  return (unsigned int)v10;
}
