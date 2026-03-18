/*
 * XREFs of ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801F8E48
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801F803C (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x18006A95C (-Insert@-$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ??_G?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1801E9EBC (--_G-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall CManipulationContext::RevalidationCleanup(int a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // rbp
  int v5; // r15d
  __int64 v6; // rsi
  int v7; // r14d
  __int64 (__fastcall ***v8)(_QWORD); // rbx
  __int64 v9; // rdx
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  __int64 (__fastcall ***v17[9])(_QWORD); // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h]

  if ( a1 > 0 )
  {
    v3 = 0;
    v4 = a2;
    v5 = a1;
    v6 = 0LL;
    v7 = 1;
    do
    {
      v17[0] = *(__int64 (__fastcall ****)(_QWORD))(v6 + *(_QWORD *)(v4 + 24));
      v8 = v17[0];
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v17);
      if ( (*((_BYTE *)v8 + 28) & 4) != 0 )
      {
        v10 = 0;
        if ( *((int *)v8 + 20) > 0 )
        {
          v11 = 0LL;
          v20 = 0LL;
          do
          {
            v12 = *(__int64 *)((char *)v8[9] + v11);
            if ( v12 )
            {
              while ( 1 )
              {
                v13 = (_QWORD *)(v12 + 192);
                v12 = *(_QWORD *)(v12 + 192);
                if ( !v12 )
                  break;
                *v13 = 0LL;
                CQueue<CResource *>::Insert(a3, v9, (v12 + 8) & -(__int64)(v12 != 0));
              }
              v11 = v20;
            }
            v11 += 8LL;
            ++v10;
            v20 = v11;
          }
          while ( v10 < *((_DWORD *)v8 + 20) );
          v4 = a2;
        }
        v14 = *(_QWORD *)(v4 + 24);
        if ( *(_QWORD *)(*(_QWORD *)(v6 + v14) + 56LL) )
        {
          *((_BYTE *)v8 + 28) &= ~4u;
        }
        else
        {
          if ( v3 >= 0 && v3 < *(_DWORD *)(v4 + 32) )
          {
            Microsoft::WRL::ComPtr<CManipulationContext>::`scalar deleting destructor'((__int64 *)(v14 + 8LL * v3));
            v15 = *(_DWORD *)(v4 + 32);
            if ( v7 != v15 )
            {
              v16 = *(_QWORD *)(v4 + 24) + 8LL * v3;
              memmove_0((void *)v16, (const void *)(v16 + 8), 8LL * (v15 - v3 - 1));
              v15 = *(_DWORD *)(v4 + 32);
            }
            *(_DWORD *)(v4 + 32) = v15 - 1;
          }
          --v5;
          --v3;
          --v7;
          v6 -= 8LL;
        }
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)v17);
      ++v3;
      ++v7;
      v6 += 8LL;
    }
    while ( v3 < v5 );
  }
}
