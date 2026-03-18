/*
 * XREFs of ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C0016D5C
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B360 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00AA7F8 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
        VIDMM_CPU_HOST_APERTURE *this,
        void *a2,
        const struct VIDMM_CPU_HOST_APERTURE_RANGE *a3,
        unsigned __int16 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v8; // rbp
  int v9; // r14d
  PMDL Mdl; // r9
  __int64 v11; // r10
  int v12; // edi
  unsigned __int64 v13; // r11
  unsigned int v14; // esi
  unsigned __int64 v15; // r11
  __int64 v16; // rdx
  int v17; // ecx
  __int64 i; // r8
  CSHORT *p_Size; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // r11
  __int64 v24; // rcx

  v8 = a5 >> 12;
  v9 = *(_DWORD *)(*((_QWORD *)this + 6) + 376LL);
  Mdl = IoAllocateMdl(a2, (unsigned int)(a5 >> 12) << 12, 0, 0, 0LL);
  if ( Mdl )
  {
    Mdl->MdlFlags |= 0x802u;
    v11 = *(unsigned int *)a3;
    v12 = *((_DWORD *)a3 + 1);
    v13 = *((_QWORD *)this + 4);
    if ( v9 == 4096 )
    {
      p_Size = &Mdl[1].Size;
      v21 = v11;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 24LL) + 308LL) & 8) != 0 )
      {
        Mdl[1].Next = *(struct _MDL **)(v13 + 8 * v11 + 48);
        if ( (_DWORD)v11 != v12 )
        {
          do
          {
            v22 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v21);
            v21 = v22;
            *(_QWORD *)p_Size = *(_QWORD *)(v13 + 8 * v22 + 48);
            p_Size += 4;
          }
          while ( (_DWORD)v22 != v12 );
        }
      }
      else
      {
        v23 = v13 >> 12;
        Mdl[1].Next = (struct _MDL *)(v11 + v23);
        if ( (_DWORD)v11 != v12 )
        {
          do
          {
            v24 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v21);
            v21 = v24;
            *(_QWORD *)p_Size = v24 + v23;
            p_Size += 4;
          }
          while ( (_DWORD)v24 != v12 );
        }
      }
    }
    else
    {
      v14 = a4 >> 12;
      v15 = v13 >> 12;
      v16 = v15 + (unsigned int)(16 * v11) + v14;
      v17 = 16 - v14;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v8; i = (unsigned int)(i + 1) )
      {
        if ( !v17 )
        {
          LODWORD(v11) = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)v11);
          v17 = 16;
          v16 = v15 + (unsigned int)(16 * v11);
        }
        *((_QWORD *)&Mdl[1].Next + i) = v16;
        --v17;
        ++v16;
      }
    }
  }
  return Mdl;
}
