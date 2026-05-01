/*
 * XREFs of ?Init@ModernResourceEnforcer@@IEAAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x180040CE0
 * Callers:
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x180040C60 (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 * Callees:
 *     <none>
 */

int __fastcall ModernResourceEnforcer::Init(ModernResourceEnforcer *this, struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a2)
{
  __int128 v2; // xmm0
  char *v3; // rdx
  int v4; // eax

  *(_OWORD *)((char *)this + 8) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 24) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 104) = *((_OWORD *)a2 + 6);
  v2 = *((_OWORD *)a2 + 7);
  v3 = (char *)a2 + 128;
  *(_OWORD *)((char *)this + 120) = v2;
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)v3;
  *(_OWORD *)((char *)this + 152) = *((_OWORD *)v3 + 1);
  *(_OWORD *)((char *)this + 168) = *((_OWORD *)v3 + 2);
  *(_OWORD *)((char *)this + 184) = *((_OWORD *)v3 + 3);
  *(_OWORD *)((char *)this + 200) = *((_OWORD *)v3 + 4);
  *((_QWORD *)this + 27) = *((_QWORD *)v3 + 10);
  v4 = TpAllocWork((char *)this + 272, ModernResourceEnforcer::NotificationWorkCallback, this, 0LL);
  if ( v4 >= 0 )
    v4 = 0;
  return v4 | 0x10000000;
}
