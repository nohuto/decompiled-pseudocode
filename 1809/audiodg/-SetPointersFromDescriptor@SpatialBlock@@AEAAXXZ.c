/*
 * XREFs of ?SetPointersFromDescriptor@SpatialBlock@@AEAAXXZ @ 0x14005F24C
 * Callers:
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14005DC64 (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14005E778 (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SpatialBlock::SetPointersFromDescriptor(SpatialBlock *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rdx

  v2 = *(_QWORD *)this + 28LL;
  *((_QWORD *)this + 1) = v2;
  v3 = v2 + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 8LL) * *(_DWORD *)(*(_QWORD *)this + 12LL));
  *((_QWORD *)this + 4) = v3;
  v4 = v3 + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 8LL) * *(_DWORD *)(*(_QWORD *)this + 12LL));
  *((_QWORD *)this + 2) = v4;
  v5 = v4 + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 8LL) * *(_DWORD *)(*(_QWORD *)this + 16LL));
  *((_QWORD *)this + 5) = v5;
  v6 = *(_QWORD *)this;
  v7 = (unsigned int)v5
     + *(_DWORD *)(*(_QWORD *)this + 8LL) * *(_DWORD *)(*(_QWORD *)this + 16LL)
     - (unsigned int)*(_QWORD *)this;
  v8 = ((_BYTE)v5
      + *(_BYTE *)(*(_QWORD *)this + 8LL) * *(_BYTE *)(*(_QWORD *)this + 16LL)
      - (unsigned __int8)*(_QWORD *)this) & 0x1F;
  if ( v8 )
    v7 = (unsigned int)(32 - v8 + v7);
  v9 = v6 + v7;
  *((_QWORD *)this + 3) = v9;
  *((_QWORD *)this + 6) = v9 + (unsigned int)(*(_DWORD *)(v6 + 8) * *(_DWORD *)(v6 + 20));
}
