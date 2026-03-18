/*
 * XREFs of ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C027BDA8
 * Callers:
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C027C730 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C027DBB8 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00071B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000CABC (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F1840 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall BLTQUEUE::DestroyStagingBuffer(BLTQUEUE *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  struct DXGRESOURCE *v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // edx
  DXGDEVICESYNCOBJECT *v15; // rcx
  _BYTE v16[24]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v1 = *((_QWORD *)this + 25);
  if ( !v1 )
    goto LABEL_22;
  v3 = *(_QWORD *)(v1 + 40);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v3 + 56), &ApcState);
  *(_BYTE *)(*((_QWORD *)this + 25) + 1785LL) = 1;
  if ( *((_DWORD *)this + 660) )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v16, (struct _KTHREAD **)v3);
    v5 = *((unsigned int *)this + 660);
    v6 = (*((_DWORD *)this + 660) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v6 < *(_DWORD *)(v3 + 224) )
    {
      v7 = *(_QWORD *)(v3 + 208);
      v5 = ((unsigned int)v5 >> 25) & 0x60;
      v4 = *(unsigned int *)(v7 + 16 * v6 + 8);
      if ( (_BYTE)v5 == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x60) && (v4 & 0x2000) == 0 && (v4 & 0x1F) != 0 )
      {
        v4 &= 0x1Fu;
        if ( (_BYTE)v4 == 4 )
        {
          v9 = *(struct DXGRESOURCE **)(v7 + 16LL * (unsigned int)v6);
          if ( v9 )
          {
LABEL_11:
            v11 = *((_DWORD *)this + 660);
            v12 = (v11 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v12 < *(_DWORD *)(v3 + 224) )
            {
              v13 = *(_QWORD *)(v3 + 208);
              v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
              if ( ((v11 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
                && (v14 & 0x2000) == 0
                && (v14 & 0x1F) != 0 )
              {
                *(_DWORD *)(v13 + 16LL * ((v11 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
            DXGDEVICE::DestroyAllocationInternal(
              *((DXGDEVICE **)this + 25),
              0,
              0LL,
              v9,
              0LL,
              DXGDEVICE::DestroyFlagsDefault);
            goto LABEL_17;
          }
LABEL_10:
          v10 = WdLogNewEntry5_WdAssertion(v4, v5);
          *(_QWORD *)(v10 + 24) = 4065LL;
          WdLogEvent5_WdAssertion(v10);
          goto LABEL_11;
        }
        v8 = WdLogNewEntry5_WdError(v4, v5, v7);
        *(_QWORD *)(v8 + 24) = 267LL;
        WdLogEvent5_WdError(v8);
      }
    }
    v9 = 0LL;
    goto LABEL_10;
  }
LABEL_17:
  if ( *((_DWORD *)this + 666) )
  {
    v15 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 334);
    if ( v15 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v15);
    *((_DWORD *)this + 666) = 0;
    *((_QWORD *)this + 334) = 0LL;
  }
  *(_BYTE *)(*((_QWORD *)this + 25) + 1785LL) = 0;
  KeUnstackDetachProcess(&ApcState);
LABEL_22:
  *((_QWORD *)this + 330) = 0LL;
  *((_QWORD *)this + 329) = 0LL;
  *((_QWORD *)this + 331) = 0LL;
  *((_QWORD *)this + 332) = 0LL;
}
