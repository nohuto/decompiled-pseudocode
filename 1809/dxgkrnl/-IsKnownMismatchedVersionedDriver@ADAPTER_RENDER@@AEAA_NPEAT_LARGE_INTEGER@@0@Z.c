/*
 * XREFs of ?IsKnownMismatchedVersionedDriver@ADAPTER_RENDER@@AEAA_NPEAT_LARGE_INTEGER@@0@Z @ 0x1C01C6C7C
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0158E80 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_RENDER::IsKnownMismatchedVersionedDriver(
        ADAPTER_RENDER *this,
        union _LARGE_INTEGER *a2,
        union _LARGE_INTEGER *a3)
{
  int v3; // eax
  LONGLONG QuadPart; // rax
  __int64 v6; // rcx

  if ( (a2->HighPart & 0xFFFF0000) < 0x150000 && (a3->HighPart & 0xFFFF0000) < 0x150000 )
    return 1;
  v3 = *(_DWORD *)(*((_QWORD *)this + 2) + 284LL);
  if ( v3 == 32902 )
  {
    if ( a2->QuadPart != 0x16001400101215LL )
      return 0;
    return a3->QuadPart == 0x15001400101215LL;
  }
  else
  {
    if ( v3 == 4098 )
    {
      QuadPart = a3->QuadPart;
      v6 = 0x15001300800000LL;
    }
    else
    {
      if ( v3 != 1297040209 )
        return 0;
      QuadPart = a2->QuadPart;
      if ( a2->QuadPart == 0x160012042C0000LL && a3->QuadPart == 0x160012042B003CLL )
        return 1;
      v6 = 0x848003800000000LL;
    }
    return (QuadPart & 0xFFFFFFFFFFFF0000uLL) == v6;
  }
}
