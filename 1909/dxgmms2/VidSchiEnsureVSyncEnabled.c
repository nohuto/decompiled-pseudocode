/*
 * XREFs of VidSchiEnsureVSyncEnabled @ 0x1C007AE30
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004A20 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C00055D0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0039AC0 (VidSchiSubmitCommandPacketToHwQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     VidSchIsVSyncEnabled @ 0x1C007B780 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiEnsureVSyncEnabled(__int64 a1, __int64 a2)
{
  bool v4; // si
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r10
  unsigned int v12; // r9d
  bool v13; // zf
  int v14; // eax
  char v15; // cl
  int v16; // eax
  void (__fastcall *v17)(_QWORD); // rax
  void (__fastcall *v18)(_QWORD); // rax

  v4 = *(_QWORD *)(a1 + 96) != 0LL;
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(unsigned int *)(a1 + 160);
  if ( *(_QWORD *)(a1 + 96) )
  {
    if ( *(_DWORD *)(a1 + 48) == 3 && *(_DWORD *)(*(_QWORD *)(v5 + 8 * v6 + 2576) + 33280LL) != -1 )
    {
      v17 = *(void (__fastcall **)(_QWORD))(v5 + 2432);
      if ( v17 )
        v17(*(_QWORD *)(v5 + 2496));
    }
  }
  if ( (*(_DWORD *)(a1 + 272) & 0x1000000) != 0
    && *(_DWORD *)(*(_QWORD *)(v5 + 8LL * *(unsigned int *)(a1 + 396) + 2576) + 33280LL) != -1 )
  {
    v18 = *(void (__fastcall **)(_QWORD))(v5 + 2432);
    if ( v18 )
      v18(*(_QWORD *)(v5 + 2496));
  }
  if ( *(_DWORD *)(a1 + 48) == 3 && *(_DWORD *)(a1 + 160) != -1 )
  {
    v9 = *(_QWORD *)(a1 + 88);
    if ( v9 )
      v10 = *(_QWORD *)(v9 + 104);
    else
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 40LL) + 8LL);
    v11 = *(_QWORD *)(v10 + 32);
    if ( (*(_DWORD *)(a1 + 72) & 0x800000) != 0 )
      v12 = ((unsigned __int16)*(_DWORD *)(a1 + 824) | (unsigned __int16)(*(_DWORD *)(a1 + 824) >> 10)) & 0x3FF;
    else
      v12 = (1 << *(_DWORD *)(v11 + 140)) - 1;
    v13 = !_BitScanForward((unsigned int *)&v14, v12);
    v15 = -1;
    if ( !v13 )
      v15 = v14;
    while ( v12 )
    {
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(*(_QWORD *)(v11 + 8LL * *(unsigned int *)(a1 + 160) + 2576) + 216LL * v15 + 176),
        1u);
      v16 = 1 << v15;
      v15 = -1;
      v12 &= ~v16;
      v13 = !_BitScanForward((unsigned int *)&v16, v12);
      if ( !v13 )
        v15 = v16;
    }
  }
  result = *(unsigned int *)(a1 + 72);
  if ( (result & 0x1000) != 0 && ((result & 0x400) == 0 || (result & 0x800) != 0) && (_DWORD)v6 != -1 )
  {
    if ( (result & 0x40000) != 0 )
    {
      if ( (result & 0x1000000) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 720));
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 1272));
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1208));
        result = *(unsigned int *)(a2 + 48);
        if ( (result & 2) != 0 || *(int *)(a1 + 400) >= 4 || *(_BYTE *)(v5 + 144) )
          return VidSchIsVSyncEnabled(v5, (unsigned int)v6);
      }
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1144));
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL)
                                 + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 32) + 4LL))
                     + 8 * v6
                     + 88);
      if ( (*(_DWORD *)(a1 + 72) & 0x80u) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v6 + 5792) + 8LL));
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      result = *(unsigned int *)(a1 + 72);
      if ( (result & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 720));
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 1272));
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1208));
        if ( v4 )
        {
          result = *(unsigned int *)(a2 + 48);
          if ( (result & 2) != 0 || *(int *)(a1 + 400) >= 4 || *(_BYTE *)(v5 + 144) )
            return VidSchIsVSyncEnabled(v5, (unsigned int)v6);
        }
      }
    }
  }
  return result;
}
