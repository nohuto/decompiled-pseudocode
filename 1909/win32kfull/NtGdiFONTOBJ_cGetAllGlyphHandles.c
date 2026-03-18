/*
 * XREFs of NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02ACBA0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C009E55C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0155050 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1C028D320 (FONTOBJ_cGetAllGlyphHandles.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetAllGlyphHandles(__int64 a1, char *a2, __int64 a3)
{
  ULONG v5; // ebp
  HGLYPH *v6; // rdi
  ULONG v7; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v10; // rbx
  FONTOBJ *v11; // rax
  FONTOBJ *v12; // r14
  ULONG AllGlyphHandles; // eax

  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return v7;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v11 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  v12 = v11;
  if ( v11 )
  {
    if ( a2 )
    {
      AllGlyphHandles = FONTOBJ_cGetAllGlyphHandles(v11, 0LL);
      v5 = AllGlyphHandles;
      if ( AllGlyphHandles )
      {
        if ( AllGlyphHandles > 0x9C4000 )
          goto LABEL_13;
        v6 = (HGLYPH *)PALLOCMEM2(4 * AllGlyphHandles, 1886221639LL, 0);
      }
    }
    v7 = FONTOBJ_cGetAllGlyphHandles(v12, v6);
    if ( !v7 || !a2 )
    {
LABEL_11:
      if ( v6 )
        Win32FreePool(v6);
      goto LABEL_13;
    }
    if ( v6 )
    {
      v7 &= -((unsigned int)bSafeCopyBits(a2, v6, 4 * v5) != 0);
      goto LABEL_11;
    }
  }
LABEL_13:
  if ( v10 )
    --*((_DWORD *)v10 + 105);
  return v7;
}
