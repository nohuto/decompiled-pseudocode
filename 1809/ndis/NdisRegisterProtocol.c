/*
 * XREFs of NdisRegisterProtocol @ 0x1C00EDB50
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00224F0 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_Z @ 0x1C0041A88 (WPP_SF_Z.c)
 *     WPP_SF_qZL @ 0x1C00519B0 (WPP_SF_qZL.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00BFE14 (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C00C0670 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ndisInitializeRef @ 0x1C00C4264 (ndisInitializeRef.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00CE0CC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00CE204 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00ED8F0 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ndisValidateLegacyProtocols @ 0x1C00EE584 (ndisValidateLegacyProtocols.c)
 */

_QWORD *__fastcall NdisRegisterProtocol(int *a1, __int64 *a2, char *a3, unsigned int a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  _QWORD *result; // rax
  unsigned int v11; // eax
  _WORD *v12; // r15
  volatile signed __int32 **ProtocolDriver; // rax
  _QWORD *v14; // rbx
  void *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  volatile signed __int32 *v18; // rbx
  unsigned __int16 v19; // bp
  PVOID PoolWithTag; // rax
  char v21; // al
  __int64 v22; // [rsp+20h] [rbp-48h]
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF
  PVOID v24; // [rsp+80h] [rbp+18h] BYREF

  v24 = 0LL;
  v8 = 0LL;
  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
  if ( (unsigned __int8)byte_1C00A0254 >= 4u )
    WPP_SF_Z(0xEu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (const wchar_t *)a3 + 44);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)*a3 < 4u )
  {
    DbgPrint("Ndis: NdisRegisterProtocol Ndis 3.0 protocols are not supported.\n");
LABEL_7:
    v9 = -1073676284;
    goto LABEL_8;
  }
  if ( *a3 == 4 )
  {
    if ( a3[1] )
      goto LABEL_7;
    v11 = 144;
  }
  else
  {
    if ( *a3 != 5 || (unsigned __int8)a3[1] > 1u )
      goto LABEL_7;
    v11 = 208;
  }
  if ( a4 >= v11 && (unsigned __int8)ndisValidateLegacyProtocols(a3) )
  {
    v12 = a3 + 88;
    ProtocolDriver = (volatile signed __int32 **)ndisBindGetProtocolDriver(
                                                   P,
                                                   (const struct _UNICODE_STRING *)(a3 + 88),
                                                   1,
                                                   1);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=((volatile signed __int32 **)&v24, ProtocolDriver);
    v14 = P[0];
    if ( P[0] && _InterlockedExchangeAdd((volatile signed __int32 *)P[0] + 12, 0xFFFFFFFF) == 1 && v14 )
    {
      v15 = (void *)v14[3];
      if ( v15 )
        ExFreePoolWithTag(v15, 0x7274534Bu);
      v16 = v14[1];
      if ( *(_QWORD **)(v16 + 8) != v14 + 1 || (v17 = (_QWORD *)v14[2], (_QWORD *)*v17 != v14 + 1) )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      ExFreePoolWithTag(v14, 0x44745042u);
    }
    v18 = (volatile signed __int32 *)v24;
    if ( v24
      && (v19 = *v12 + 890,
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x6270444Eu),
          (v8 = (__int64)PoolWithTag) != 0) )
    {
      memset(PoolWithTag, 0, v19);
      *(_QWORD *)(v8 + 824) = 0LL;
      *(_QWORD *)(v8 + 872) = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
      *(_QWORD *)(v8 + 864) = v8;
      *(_QWORD *)(v8 + 848) = KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
      *(_QWORD *)(v8 + 856) = v8 + 832;
      *(_QWORD *)(v8 + 832) = 0LL;
      *(_DWORD *)(v8 + 880) = 0;
      if ( (PVOID *)(v8 + 824) != &v24 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset((volatile signed __int32 **)(v8 + 824), v18);
      KeInitializeMutex((PRKMUTEX)(v8 + 360), 0xFFFFu);
      *(_WORD *)v8 = 259;
      *(_WORD *)(v8 + 2) = v19;
      *(_BYTE *)(v8 + 56) = *a3;
      *(_BYTE *)(v8 + 57) = a3[1];
      *(_QWORD *)(v8 + 80) = v8 + 888;
      *(_DWORD *)(v8 + 60) = *((_DWORD *)a3 + 1);
      *(_DWORD *)(v8 + 64) = *((_DWORD *)a3 + 1) & 0xF0000000;
      *(_WORD *)(v8 + 72) = *v12;
      *(_WORD *)(v8 + 74) = *v12;
      RtlUpcaseUnicodeString((PUNICODE_STRING)(v8 + 72), (PCUNICODE_STRING)(a3 + 88), 0);
      *(_QWORD *)(v8 + 224) = *((_QWORD *)a3 + 1);
      *(_QWORD *)(v8 + 232) = *((_QWORD *)a3 + 2);
      *(_QWORD *)(v8 + 240) = *((_QWORD *)a3 + 3);
      *(_QWORD *)(v8 + 248) = *((_QWORD *)a3 + 4);
      *(_QWORD *)(v8 + 256) = *((_QWORD *)a3 + 5);
      *(_QWORD *)(v8 + 152) = *((_QWORD *)a3 + 6);
      *(_QWORD *)(v8 + 264) = *((_QWORD *)a3 + 7);
      *(_QWORD *)(v8 + 272) = *((_QWORD *)a3 + 8);
      *(_QWORD *)(v8 + 160) = *((_QWORD *)a3 + 9);
      *(_QWORD *)(v8 + 168) = *((_QWORD *)a3 + 10);
      v21 = *a3;
      if ( (unsigned __int8)*a3 >= 4u )
      {
        *(_QWORD *)(v8 + 280) = *((_QWORD *)a3 + 13);
        *(_QWORD *)(v8 + 288) = *((_QWORD *)a3 + 14);
        *(_QWORD *)(v8 + 296) = *((_QWORD *)a3 + 15);
        *(_QWORD *)(v8 + 128) = *((_QWORD *)a3 + 16);
        *(_QWORD *)(v8 + 136) = *((_QWORD *)a3 + 17);
        v21 = *a3;
      }
      if ( v21 == 5 )
      {
        *(_QWORD *)(v8 + 304) = *((_QWORD *)a3 + 22);
        *(_QWORD *)(v8 + 192) = *((_QWORD *)a3 + 23);
        *(_QWORD *)(v8 + 312) = *((_QWORD *)a3 + 24);
        *(_QWORD *)(v8 + 200) = *((_QWORD *)a3 + 25);
      }
      *a2 = v8;
      ndisInitializeRef(v8 + 32, 15);
      ndisRegisterProtocolDriverCommon((struct _NDIS_PROTOCOL_BLOCK *)v8);
      ndisWriteDriverNDISVersionToServiceKey(
        *(unsigned __int8 *)(v8 + 56),
        *(unsigned __int8 *)(v8 + 57),
        0,
        0,
        0,
        v8 + 72);
      v9 = 0;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -1073676283;
  }
LABEL_8:
  *a1 = v9;
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A0254 >= 4u )
  {
    LODWORD(v22) = v9;
    WPP_SF_qZL(0xFu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, v8, (const wchar_t *)a3 + 44, v22);
  }
  result = v24;
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v24 + 12, 0xFFFFFFFF) == 1 )
      return KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(v24);
  }
  return result;
}
