/*
 * XREFs of ??0NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C00CC070
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C012936C (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ?AllocateBuckets@?$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z @ 0x1C00CC124 (-AllocateBuckets@-$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z.c)
 */

NdisBindBuilderGlobal *__fastcall NdisBindBuilderGlobal::NdisBindBuilderGlobal(NdisBindBuilderGlobal *this)
{
  __int64 Buckets; // rax
  unsigned __int64 v3; // rcx
  char *v4; // rdi
  NdisBindBuilderGlobal *result; // rax
  char v6; // al

  Buckets = Rtl::KHashTableBase<1>::AllocateBuckets(0x40uLL);
  v3 = 8LL;
  v4 = (char *)Buckets;
  if ( !Buckets )
  {
    v3 = 1LL;
    v4 = (char *)this + 16;
  }
  if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
  {
    v6 = -1;
    do
    {
      ++v6;
      LODWORD(v3) = (unsigned int)v3 >> 1;
    }
    while ( (_DWORD)v3 );
    v3 = (unsigned int)(1 << v6);
  }
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = v4;
  if ( (unsigned int)v3 > 0x4000000 )
    v3 = 0x4000000LL;
  *((_DWORD *)this + 1) = (32 * v3) | 3;
  if ( v4 > &v4[8 * v3] )
    v3 = 0LL;
  if ( v3 )
    memset64(v4, (unsigned __int64)this | 1, v3);
  *((_QWORD *)this + 3) = 0LL;
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 48) = 0;
  return result;
}
