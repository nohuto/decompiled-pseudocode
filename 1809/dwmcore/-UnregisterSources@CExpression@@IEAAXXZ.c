/*
 * XREFs of ?UnregisterSources@CExpression@@IEAAXXZ @ 0x18005B5F0
 * Callers:
 *     ??1CExpression@@UEAA@XZ @ 0x1800BC1AC (--1CExpression@@UEAA@XZ.c)
 *     ?SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z @ 0x1801965C0 (-SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     ?RemoveElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXPEAVCAnimationSourceMapEntry@@@Z @ 0x18005B73C (-RemoveElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXPEAVCAnimationSourceMapEntr.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CExpression::UnregisterSources(CExpression *this)
{
  char v1; // dl
  CExpression *v3; // r14
  __int64 v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rbp
  int v8; // eax
  struct _RTL_GENERIC_TABLE *v9; // rcx
  _DWORD *v10; // rdi
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 i; // r8
  int Buffer; // [rsp+20h] [rbp-38h] BYREF
  void *v15[2]; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+3Ch] [rbp-1Ch]
  int v18; // [rsp+40h] [rbp-18h]

  v1 = *((_BYTE *)this + 408);
  if ( (v1 & 2) != 0 )
  {
    v3 = this;
    if ( *((_QWORD *)this + 50) )
      v3 = (CExpression *)*((_QWORD *)this + 50);
    v4 = 0LL;
    if ( *((_DWORD *)this + 98) )
    {
      do
      {
        v5 = *((_QWORD *)this + 48);
        v6 = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * *(unsigned int *)(v5 + 24 * v4 + 20));
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 16);
          if ( v7 )
          {
            v8 = *(_DWORD *)(v5 + 24 * v4);
            v9 = *(struct _RTL_GENERIC_TABLE **)(v7 + 40);
            v16 = 0;
            v17 = 0;
            v18 = 0;
            *(_OWORD *)v15 = 0LL;
            Buffer = v8;
            v10 = RtlLookupElementGenericTable(v9, &Buffer);
            if ( v15[0] != v15[1] )
            {
              WPF::ProcessHeapImpl::Free(v15[0]);
              v15[0] = 0LL;
            }
            if ( v10 )
            {
              v11 = v10[8];
              v12 = 0LL;
              for ( i = *((_QWORD *)v10 + 1); (unsigned int)v12 < v11; v12 = (unsigned int)(v12 + 1) )
              {
                if ( v3 == *(CExpression **)(i + 8 * v12) )
                  break;
              }
              if ( (unsigned int)v12 < v11 )
              {
                while ( (unsigned int)v12 < v11 - 1 )
                {
                  *(_QWORD *)(i + 8 * v12) = *(_QWORD *)(i + 8LL * (unsigned int)(v12 + 1));
                  v12 = (unsigned int)(v12 + 1);
                  v11 = v10[8];
                }
                v10[8] = v11 - 1;
              }
              if ( !v10[8] )
                CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::RemoveElement(
                  *(PRTL_GENERIC_TABLE *)(v7 + 40),
                  v10);
            }
          }
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 98) );
      v1 = *((_BYTE *)this + 408);
    }
    *((_BYTE *)this + 408) = v1 & 0xFD;
  }
}
