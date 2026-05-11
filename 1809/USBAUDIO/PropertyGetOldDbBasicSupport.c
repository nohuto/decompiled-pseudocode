/*
 * XREFs of PropertyGetOldDbBasicSupport @ 0x1C00259C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetOldDbBasicSupport(IRP *a1, __int64 a2, __int64 a3)
{
  PKSFILTER FilterFromIrp; // rax
  unsigned int v7; // r11d
  unsigned int Length; // r10d
  unsigned int v9; // r9d
  __int64 v10; // r8
  unsigned int v11; // r12d
  ULONG_PTR v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r10d
  _OWORD *v15; // rsi
  _OWORD *v16; // rbp
  _QWORD *v17; // r15
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned int v23; // [rsp+60h] [rbp+8h]

  FilterFromIrp = KsGetFilterFromIrp(a1);
  v7 = 1;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v9 = -1073741811;
  if ( FilterFromIrp )
  {
    v10 = (__int64)FilterFromIrp->Descriptor->NodeDescriptors + 152 * *(unsigned int *)(a2 + 24);
    v11 = *(_DWORD *)(v10 + 92);
    v23 = v11;
    if ( *(_DWORD *)(a2 + 16) == 18 )
      v7 = *(_DWORD *)(*(_QWORD *)(v10 + 128) + 12LL);
    v12 = 16 * v7 * v11 + 56;
    if ( Length >= 4 )
    {
      v9 = 0;
      a1->IoStatus.Information = 4LL;
      *(_DWORD *)a3 = 515;
      if ( Length >= 0x28 )
      {
        *(_DWORD *)(a3 + 28) = 0;
        *(_DWORD *)(a3 + 36) = 0;
        *(_DWORD *)(a3 + 4) = v12;
        *(_DWORD *)(a3 + 24) = 3;
        *(_DWORD *)(a3 + 32) = 1;
        *(GUID *)(a3 + 8) = KSPROPTYPESETID_General;
        a1->IoStatus.Information = 40LL;
        if ( Length >= (unsigned int)v12 )
        {
          v13 = *(_QWORD *)(v10 + 128);
          v14 = 0;
          *(_DWORD *)(a3 + 40) = 2;
          *(_DWORD *)(a3 + 52) = 2;
          v15 = (_OWORD *)(a3 + 56);
          *(_DWORD *)(a3 + 44) = 16;
          *(_DWORD *)(a3 + 48) = v11;
          a1->IoStatus.Information = v12;
          if ( v11 )
          {
            v16 = (_OWORD *)(v13 + 16);
            v17 = (_QWORD *)(v13 + 32);
            do
            {
              v18 = *(_DWORD *)(v10 + 96);
              if ( _bittest(&v18, v14) )
              {
                if ( *(_DWORD *)(a2 + 16) == 18 )
                {
                  v19 = 0;
                  if ( v7 )
                  {
                    v20 = 0LL;
                    do
                    {
                      v21 = 2LL * (v7 * v14 + v19);
                      v20 += 20LL;
                      ++v19;
                      *(_OWORD *)(a3 + 56 + 8 * v21) = *(_OWORD *)(v20 + *v17 - 16);
                    }
                    while ( v19 < v7 );
                    v11 = v23;
                  }
                }
                else
                {
                  *v15 = *v16;
                }
              }
              ++v14;
              v17 += 5;
              v16 += 2;
              ++v15;
            }
            while ( v14 < v11 );
          }
        }
      }
    }
    else
    {
      a1->IoStatus.Information = v12;
      return (unsigned int)-1073741789;
    }
  }
  return v9;
}
