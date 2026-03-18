/*
 * XREFs of ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C00B1968
 * Callers:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00B0458 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C023A4FC (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C023A720 (BRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     <none>
 */

void __fastcall vTryToCacheRealization(struct EBRUSHOBJ *a1, struct RBRUSH *a2, struct BRUSH *a3, int a4)
{
  __int64 v8; // r14
  int v9; // eax
  unsigned int v10; // eax

  v8 = HmgPentryFromPobj(a3);
  if ( G_fConsole
    || (*(_DWORD *)a3 & 0x800000) == 0
    || !*((_DWORD *)a2 + 3)
    || ((*(_DWORD *)(v8 + 8) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
  {
    *(_DWORD *)a2 = 1;
    if ( !*((_DWORD *)a3 + 24) && !_InterlockedExchange((volatile __int32 *)a3 + 24, 1) )
    {
      *(_DWORD *)a2 = 2;
      v9 = *((_DWORD *)a3 + 10);
      if ( a4 == 1 )
        v10 = v9 | 0x40000000;
      else
        v10 = v9 & 0xBFFFFFFF;
      *((_DWORD *)a3 + 10) = v10;
      *((_DWORD *)a3 + 26) = *((_DWORD *)a1 + 13);
      *((_DWORD *)a3 + 27) = *((_DWORD *)a1 + 11);
      *((_DWORD *)a3 + 28) = *((_DWORD *)a1 + 10);
      *((_QWORD *)a3 + 15) = a2;
      *((_QWORD *)a3 + 16) = *(_QWORD *)(*((_QWORD *)a1 + 10) + 48LL);
      *((_DWORD *)a3 + 29) = *((_DWORD *)a1 + 7);
      _InterlockedExchange((volatile __int32 *)a3 + 25, *((_DWORD *)a1 + 12));
    }
  }
}
