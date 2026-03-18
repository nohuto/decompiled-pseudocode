/*
 * XREFs of XilCoreUsbDevice_Create @ 0x1C0042F64
 * Callers:
 *     XilUsbDevice_Create @ 0x1C00343E8 (XilUsbDevice_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C000B0A0 (XilCommonBuffer_AcquireBufferEx.c)
 *     XilCoreUsbDevice_FreeResources @ 0x1C0043078 (XilCoreUsbDevice_FreeResources.c)
 */

__int64 __fastcall XilCoreUsbDevice_Create(__int64 a1, char a2, __int64 a3, int a4)
{
  __int64 v7; // rax
  void *v8; // r15
  __int64 v9; // r14
  char *v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  char *v14; // rax

  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a3 + 16) = a2;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(void **)(v7 + 120);
  v9 = *(_QWORD *)(v7 + 88);
  v10 = XilCommonBuffer_AcquireBufferEx(v8, (*(_DWORD *)(v9 + 100) & 4) != 0 ? 2048 : 1024, a3, 829842756, a4);
  v11 = 0;
  *(_QWORD *)(a3 + 24) = v10;
  if ( !v10 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 72LL);
    v13 = 10;
LABEL_5:
    WPP_RECORDER_SF_i(v12, 2u, 0xCu, v13, (__int64)&WPP_3a9fad47fc68327903d90aac70782d8b_Traceguids, a1);
    XilCoreUsbDevice_FreeResources(a3);
    return (unsigned int)-1073741670;
  }
  v14 = XilCommonBuffer_AcquireBufferEx(
          v8,
          (*(_DWORD *)(v9 + 100) & 4) != 0 ? 2112 : 1056,
          a3,
          846619972,
          (unsigned int)(a2 != 0) + 1);
  *(_QWORD *)(a3 + 32) = v14;
  if ( !v14 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 72LL);
    v13 = 11;
    goto LABEL_5;
  }
  return v11;
}
