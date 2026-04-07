/*
 * XREFs of ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x18008CD8C
 * Callers:
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E3B0 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180035E70 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowData::SetTitle(CWindowData *this, size_t *a2, int a3)
{
  unsigned __int16 **v3; // rdi
  unsigned __int16 *v5; // r9
  unsigned __int16 *v6; // rbx
  int v7; // esi
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v3 = (unsigned __int16 **)((char *)this + 16);
  v5 = (unsigned __int16 *)*((_QWORD *)this + 2);
  v6 = (unsigned __int16 *)((char *)this + 690);
  v7 = a3 + 1;
  if ( v5 != (unsigned __int16 *)((char *)this + 690) )
  {
    if ( a3 >= 26 )
    {
      v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, unsigned __int16 **, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 24LL))(
             WPF::g_pProcessHeap,
             v3,
             2LL * v7);
      v8 = v9;
      if ( v9 < 0 )
      {
        v11 = 8060;
        goto LABEL_9;
      }
      v5 = *v3;
      if ( !*v3 )
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1F7Du);
        return v8;
      }
    }
    else
    {
      (*(void (__fastcall **)(WPF::HeapBase *, unsigned __int16 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v5);
      v5 = v6;
      *v3 = v6;
    }
LABEL_7:
    v9 = StringCchCopyW(v5, v7, a2);
    v8 = v9;
    if ( v9 >= 0 )
      return v8;
    v11 = 8065;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v11);
    return v8;
  }
  if ( v7 <= 26 )
    goto LABEL_7;
  v5 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             2LL * v7);
  *v3 = v5;
  if ( v5 )
    goto LABEL_7;
  v8 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1F6Bu);
  return v8;
}
