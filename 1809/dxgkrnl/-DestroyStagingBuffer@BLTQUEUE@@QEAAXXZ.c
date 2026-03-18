/*
 * XREFs of ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C0245DE4
 * Callers:
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02467F4 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C0247BB4 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0035970 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall BLTQUEUE::DestroyStagingBuffer(BLTQUEUE *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  struct DXGRESOURCE *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // edx
  DXGDEVICESYNCOBJECT *v14; // rcx
  _BYTE v15[24]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v1 = *((_QWORD *)this + 25);
  if ( !v1 )
    goto LABEL_22;
  v3 = *(_QWORD *)(v1 + 40);
  KeStackAttachProcess(*(PRKPROCESS *)(v3 + 56), &ApcState);
  *(_BYTE *)(*((_QWORD *)this + 25) + 1785LL) = 1;
  if ( *((_DWORD *)this + 660) )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v15, (struct _KTHREAD **)v3);
    v5 = (*((_DWORD *)this + 660) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v5 < *(_DWORD *)(v3 + 248) )
    {
      v6 = *(_QWORD *)(v3 + 232);
      v4 = *(unsigned int *)(v6 + 16 * v5 + 8);
      if ( ((*((_DWORD *)this + 660) >> 25) & 0x60) == (*(_BYTE *)(v6 + 16 * v5 + 8) & 0x60)
        && (v4 & 0x2000) == 0
        && (v4 & 0x1F) != 0 )
      {
        v4 &= 0x1Fu;
        if ( (_BYTE)v4 == 4 )
        {
          v8 = *(struct DXGRESOURCE **)(v6 + 16LL * (unsigned int)v5);
          if ( v8 )
          {
LABEL_11:
            v10 = *((_DWORD *)this + 660);
            v11 = (v10 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v11 < *(_DWORD *)(v3 + 248) )
            {
              v12 = *(_QWORD *)(v3 + 232);
              v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
              if ( ((v10 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60)
                && (v13 & 0x2000) == 0
                && (v13 & 0x1F) != 0 )
              {
                *(_DWORD *)(v12 + 16LL * ((v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
            DXGDEVICE::DestroyAllocationInternal(
              *((DXGDEVICE **)this + 25),
              0,
              0LL,
              v8,
              0LL,
              DXGDEVICE::DestroyFlagsDefault);
            goto LABEL_17;
          }
LABEL_10:
          v9 = WdLogNewEntry5_WdAssertion(v4);
          *(_QWORD *)(v9 + 24) = 3698LL;
          WdLogEvent5_WdAssertion(v9);
          goto LABEL_11;
        }
        v7 = WdLogNewEntry5_WdError(v4);
        *(_QWORD *)(v7 + 24) = 316LL;
        WdLogEvent5_WdError(v7);
      }
    }
    v8 = 0LL;
    goto LABEL_10;
  }
LABEL_17:
  if ( *((_DWORD *)this + 666) )
  {
    v14 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 334);
    if ( v14 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v14);
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
