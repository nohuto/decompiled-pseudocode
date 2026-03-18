/*
 * XREFs of ??1_VIDSCH_GLOBAL@@QEAA@XZ @ 0x1C0030F04
 * Callers:
 *     VidSchTerminateAdapter @ 0x1C00C9A80 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall _VIDSCH_GLOBAL::~_VIDSCH_GLOBAL(_VIDSCH_GLOBAL *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx

  v2 = (char *)*((_QWORD *)this + 338);
  if ( v2 != (char *)this + 2712 && v2 )
    ExFreePoolWithTag(v2, 0);
  *((_QWORD *)this + 338) = 0LL;
  *((_DWORD *)this + 712) = 0;
  v3 = (char *)*((_QWORD *)this + 246);
  if ( v3 != (char *)this + 1976 && v3 )
    ExFreePoolWithTag(v3, 0);
  *((_QWORD *)this + 246) = 0LL;
  *((_DWORD *)this + 502) = 0;
  v4 = (char *)*((_QWORD *)this + 77);
  if ( v4 != (char *)this + 624 && v4 )
    ExFreePoolWithTag(v4, 0);
  *((_QWORD *)this + 77) = 0LL;
  *((_DWORD *)this + 172) = 0;
  v5 = (char *)*((_QWORD *)this + 73);
  if ( v5 != (char *)this + 592 && v5 )
    ExFreePoolWithTag(v5, 0);
  *((_QWORD *)this + 73) = 0LL;
  *((_DWORD *)this + 152) = 0;
  v6 = (char *)*((_QWORD *)this + 67);
  if ( v6 != (char *)this + 544 && v6 )
    ExFreePoolWithTag(v6, 0);
  *((_QWORD *)this + 67) = 0LL;
  *((_DWORD *)this + 140) = 0;
  v7 = (char *)*((_QWORD *)this + 61);
  if ( v7 != (char *)this + 496 && v7 )
    ExFreePoolWithTag(v7, 0);
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 128) = 0;
  v8 = (char *)*((_QWORD *)this + 55);
  if ( v8 != (char *)this + 448 && v8 )
    ExFreePoolWithTag(v8, 0);
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 116) = 0;
}
