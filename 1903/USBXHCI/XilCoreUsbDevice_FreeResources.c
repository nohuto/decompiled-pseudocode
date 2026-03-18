/*
 * XREFs of XilCoreUsbDevice_FreeResources @ 0x1C0048ABC
 * Callers:
 *     XilUsbDevice_FreeResources @ 0x1C00396C8 (XilUsbDevice_FreeResources.c)
 *     XilCoreUsbDevice_Create @ 0x1C004898C (XilCoreUsbDevice_Create.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000CE9C (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall XilCoreUsbDevice_FreeResources(_QWORD *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rdx
  __int64 v4; // rdi
  _DWORD *v5; // rdx

  if ( *a1 )
  {
    v2 = a1[1];
    v3 = (_DWORD *)a1[3];
    v4 = *(_QWORD *)(v2 + 120);
    if ( v3 )
    {
      CommonBuffer_ReleaseBuffer(*(_QWORD *)(v2 + 120), v3);
      a1[3] = 0LL;
    }
    v5 = (_DWORD *)a1[4];
    if ( v5 )
    {
      CommonBuffer_ReleaseBuffer(v4, v5);
      a1[4] = 0LL;
    }
  }
}
