/*
 * XREFs of ndisHandleUModePnPOp @ 0x1C001CB74
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisIfAliasChange @ 0x1C0067650 (ndisIfAliasChange.c)
 *     ?ndisHandleProtocolUnloadNotification@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1C007BF3C (-ndisHandleProtocolUnloadNotification@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     McTemplateK0qzz @ 0x1C007D778 (McTemplateK0qzz.c)
 *     WPP_RECORDER_SF_sZZ @ 0x1C007DF88 (WPP_RECORDER_SF_sZZ.c)
 *     ?ndisHandleBindNotification@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0115A34 (-ndisHandleBindNotification@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C0115B9C (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ?ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z @ 0x1C0135CB8 (-ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z.c)
 */

__int64 __fastcall ndisHandleUModePnPOp(unsigned int *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // eax
  const UNICODE_STRING *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  const char *v9; // rcx
  void *v10; // rdx
  const char *v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // [rsp+20h] [rbp-28h]

  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  v4 = a1[1];
  v5 = (const UNICODE_STRING *)(a1 + 10);
  if ( v4 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = "NDIS";
      if ( *a1 != 1 )
        v9 = "TDI ";
      WPP_RECORDER_SF_sZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (unsigned int)"TDI ",
        v3,
        24,
        v15,
        (__int64)v9,
        (__int64)v5,
        (__int64)(a1 + 6));
    }
    if ( (byte_1C00E8044 & 1) != 0 )
    {
      v10 = &ProtocolBind;
LABEL_23:
      McTemplateK0qzz(v2, v10, v3, *a1, *((_QWORD *)a1 + 6), *((_QWORD *)a1 + 4));
    }
  }
  else if ( v4 == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = "NDIS";
      if ( *a1 != 1 )
        v11 = "TDI ";
      WPP_RECORDER_SF_sZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (unsigned int)"TDI ",
        v3,
        25,
        v15,
        (__int64)v11,
        (__int64)v5,
        (__int64)(a1 + 6));
    }
    if ( (byte_1C00E8044 & 1) != 0 )
    {
      v10 = &ProtocolUnbind;
      goto LABEL_23;
    }
  }
  if ( *a1 == 1 )
  {
    v12 = a1[1];
    if ( v12 > 9 )
    {
      if ( v12 > 0xB )
      {
        if ( v12 == 14 )
        {
          v6 = ndisIfAliasChange(a1 + 6, a1 + 10);
          goto LABEL_7;
        }
        if ( v12 != 15 )
          goto LABEL_10;
      }
    }
    else
    {
      if ( v12 == 9 )
      {
        v13 = a1[4] >> 1;
        if ( v13 >= 2 )
        {
          v14 = *((_QWORD *)a1 + 1);
          if ( *(_WORD *)(v14 + 2LL * (v13 - 1)) || *(_WORD *)(v14 + 2LL * (v13 - 2)) )
            goto LABEL_10;
        }
        goto LABEL_38;
      }
      if ( !v12 )
        goto LABEL_10;
      if ( v12 > 2 )
      {
        if ( v12 != 3 )
        {
          if ( v12 == 5 )
          {
            v6 = ndisHandleProtocolUnloadNotification(v5);
            goto LABEL_7;
          }
          if ( v12 == 6 )
          {
            v7 = -1073741637;
            goto LABEL_8;
          }
LABEL_10:
          v7 = -1073741811;
          goto LABEL_8;
        }
LABEL_38:
        v6 = ndisHandleProtocolReconfigNotification(
               (struct _UNICODE_STRING *)(a1 + 6),
               (struct _UNICODE_STRING *)(a1 + 10),
               *((void **)a1 + 1),
               a1[4],
               v12);
        goto LABEL_7;
      }
      ndisHandleLegacyBindIoctl((struct _UNICODE_STRING *)(a1 + 6), v12, (const struct _UNICODE_STRING *)(a1 + 10));
    }
    v6 = ndisHandleBindNotification((struct _UNICODE_STRING *)(a1 + 6));
    goto LABEL_7;
  }
  if ( *a1 != 2 )
    goto LABEL_10;
  if ( !ndisTdiPnPHandler )
  {
    v7 = -1073741823;
    goto LABEL_8;
  }
  v6 = ((__int64 (__fastcall *)(unsigned int *, unsigned int *, unsigned int *, _QWORD, unsigned int, unsigned int))ndisTdiPnPHandler)(
         a1 + 10,
         a1 + 6,
         a1 + 14,
         *((_QWORD *)a1 + 1),
         a1[4],
         a1[1]);
LABEL_7:
  v7 = v6;
LABEL_8:
  KeReleaseMutex(&ndisPnPMutex, 0);
  return v7;
}
