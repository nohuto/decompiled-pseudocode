/*
 * XREFs of XilCoreUsbDevice_Create @ 0x1C004898C
 * Callers:
 *     XilUsbDevice_Create @ 0x1C00393D8 (XilUsbDevice_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C000D2B4 (XilCommonBuffer_AcquireBufferEx.c)
 *     XilCoreUsbDevice_FreeResources @ 0x1C0048ABC (XilCoreUsbDevice_FreeResources.c)
 */

__int64 __fastcall XilCoreUsbDevice_Create(__int64 a1, char a2, __int64 a3, int a4)
{
  __int64 v7; // rax
  void *v8; // r15
  __int64 v9; // r14
  char *v10; // rax
  unsigned int v11; // edi
  unsigned __int16 v12; // r9
  char *v13; // rax

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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 10;
LABEL_7:
      WPP_RECORDER_SF_i(
        *(_QWORD *)(*(_QWORD *)(a3 + 8) + 72LL),
        2u,
        0xCu,
        v12,
        (__int64)&WPP_3a9fad47fc68327903d90aac70782d8b_Traceguids,
        a1);
      goto LABEL_8;
    }
    goto LABEL_8;
  }
  v13 = XilCommonBuffer_AcquireBufferEx(
          v8,
          (*(_DWORD *)(v9 + 100) & 4) != 0 ? 2112 : 1056,
          a3,
          846619972,
          (unsigned int)(a2 != 0) + 1);
  *(_QWORD *)(a3 + 32) = v13;
  if ( !v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 11;
      goto LABEL_7;
    }
LABEL_8:
    XilCoreUsbDevice_FreeResources(a3);
    return (unsigned int)-1073741670;
  }
  return v11;
}
