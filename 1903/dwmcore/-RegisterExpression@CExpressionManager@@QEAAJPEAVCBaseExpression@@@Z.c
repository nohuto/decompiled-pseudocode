/*
 * XREFs of ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180085BF0
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180082B24 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180029F40 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z @ 0x180085D24 (-InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression.c)
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x180085E3C (--1CTargetMapEntry@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x1800CCEF0 (-GetSourceAnimationsForProperty@CResource@@QEAAPEAV-$DynArray@PEAVCBaseExpression@@$0A@@@I@Z.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x180195D6C (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CExpressionManager::RegisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  char *v3; // r8
  unsigned int v4; // eax
  unsigned int v5; // edx
  int inserted; // eax
  unsigned int v7; // ecx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 SourceAnimationsForProperty; // rax
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-18h]
  __int64 v16; // [rsp+40h] [rbp-10h]
  struct CBaseExpression *v17; // [rsp+68h] [rbp+18h] BYREF

  v17 = a2;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v3 = (char *)this + 32 * *((unsigned int *)this + 41);
  v4 = *((_DWORD *)v3 + 48);
  v5 = v4 + 1;
  if ( v4 + 1 < v4 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0xB8u, 0LL);
  }
  else
  {
    if ( v5 <= *((_DWORD *)v3 + 47) )
    {
      *(_QWORD *)(*((_QWORD *)v3 + 21) + 8LL * v4) = v17;
      *((_DWORD *)v3 + 48) = v5;
      goto LABEL_4;
    }
    v12 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(v3 + 168), 8u, (__int64)v3, &v17);
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC3u, 0LL);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v8, 0x67u, 0LL);
    goto LABEL_11;
  }
LABEL_4:
  v14 = *((_QWORD *)v17 + 22);
  v15 = *((_DWORD *)v17 + 46);
  inserted = CExpressionManager::InsertExpressionIntoTargetMap(
               this,
               (struct CTargetMapEntry *)&v14,
               v17,
               *((struct SubchannelMaskInfo **)v17 + 24));
  v8 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, inserted, 0x72u, 0LL);
    DynArray<CBaseExpression *,1>::Remove((char *)this + 32 * *((unsigned int *)this + 41) + 168, &v17);
  }
  else
  {
    if ( (*((_BYTE *)this + 416) & 4) == 0 )
    {
      v9 = *((_QWORD *)v17 + 22);
      if ( v9 )
        v9 = *(_QWORD *)(v9 + 16);
      if ( v9 )
      {
        SourceAnimationsForProperty = CResource::GetSourceAnimationsForProperty(v9, v15);
        if ( SourceAnimationsForProperty )
        {
          if ( *(_DWORD *)(SourceAnimationsForProperty + 24) )
            *((_BYTE *)this + 416) |= 4u;
        }
      }
    }
    v8 = 0;
  }
LABEL_11:
  CTargetMapEntry::~CTargetMapEntry((CTargetMapEntry *)&v14);
  return (unsigned int)v8;
}
