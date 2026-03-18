/*
 * XREFs of ?SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C007E1EC
 * Callers:
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C007EA80 (NtDCompositionTelemetrySetApplicationId.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::SetApplicationId(
        DirectComposition::CTelemetryInfo *this,
        size_t a2,
        char *a3)
{
  int v6; // r15d
  __int64 v7; // rax
  DirectComposition::CTelemetryInfo *v8; // rbx
  signed int v9; // edi
  DirectComposition::CTelemetryInfo **v10; // rcx

  v6 = (a2 + 19) & 0xFFFFFFFC;
  v7 = Win32AllocPoolWithQuota((unsigned int)(v6 + 20), 0x6F744344u);
  v8 = (DirectComposition::CTelemetryInfo *)v7;
  v9 = v7 == 0 ? 0xC0000017 : 0;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 16) = v6;
    *(_DWORD *)(v7 + 20) = v6;
    *(_DWORD *)(v7 + 24) = 302;
    *(_QWORD *)(v7 + 28) = a2;
    if ( &a3[a2] < a3 || (unsigned __int64)&a3[a2] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)(v7 + 36), a3, a2);
  }
  if ( v9 >= 0 )
  {
    v10 = (DirectComposition::CTelemetryInfo **)*((_QWORD *)this + 7);
    if ( *v10 != (DirectComposition::CTelemetryInfo *)((char *)this + 48) )
      __fastfail(3u);
    *(_QWORD *)v8 = (char *)this + 48;
    *((_QWORD *)v8 + 1) = v10;
    *v10 = v8;
    *((_QWORD *)this + 7) = v8;
    v8 = 0LL;
  }
  if ( v8 )
    Win32FreePool((__int64)v8);
  return (unsigned int)v9;
}
