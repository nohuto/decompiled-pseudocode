/*
 * XREFs of ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02950A8
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02951F4 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E0E20 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0131250 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContentTile(
        VIDPNSOURCEINFO *this,
        PERESOURCE *a2,
        D3DKMT_HANDLE a3,
        unsigned int a4,
        const struct tagRECT *a5,
        struct COREDEVICEACCESS *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned __int64 v8; // rdi
  __int64 v10; // r13
  __int64 result; // rax
  unsigned int v13; // ebx
  char *pData; // rdx
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  char *v18; // rsi
  unsigned __int64 v19; // r10
  char *v20; // r11
  bool v21; // zf
  unsigned int v22; // eax
  struct _D3DKMT_UNLOCK v23; // [rsp+20h] [rbp-68h] BYREF
  struct _D3DKMT_LOCK v24; // [rsp+30h] [rbp-58h] BYREF

  v8 = 0LL;
  v10 = a4;
  *a7 = 0;
  *a8 = 0;
  memset(&v24, 0, sizeof(v24));
  v24.hAllocation = a3;
  result = DXGDEVICE::Lock(a2, &v24, a6);
  v13 = result;
  if ( (int)result >= 0 )
  {
    pData = (char *)v24.pData;
    v15 = a5->right - a5->left;
    v16 = 0;
    v17 = v15 * (a5->bottom - a5->top);
    v18 = (char *)v24.pData + (unsigned int)(v10 * (a5->bottom - a5->top));
    if ( v24.pData < v18 )
    {
      while ( 1 )
      {
        v19 = v15;
        v20 = pData;
        if ( pData > &pData[4 * v15] )
          v19 = 0LL;
        if ( v19 )
        {
          do
          {
            v21 = (*(_DWORD *)v20 & 0xFFFFFF) == 0;
            v22 = v16 + 1;
            v20 += 4;
            if ( v21 )
              v22 = v16;
            ++v8;
            v16 = v22;
          }
          while ( v8 < v19 );
        }
        if ( v16 > v17 >> 1 )
          break;
        pData += v10;
        v8 = 0LL;
        if ( pData >= v18 )
          goto LABEL_13;
      }
      v16 = v15 * (a5->bottom - a5->top);
    }
LABEL_13:
    *a7 = v17;
    *a8 = v16;
    v23.phAllocations = &v24.hAllocation;
    v23.hDevice = 0;
    v23.NumAllocations = 1;
    DXGDEVICE::Unlock((DXGDEVICE *)a2, &v23, 0);
    return v13;
  }
  return result;
}
