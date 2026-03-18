/*
 * XREFs of NtGdiGetAppliedDeviceGammaRamp @ 0x1C0105C70
 * Callers:
 *     <none>
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001C878 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002AB38 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0063140 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtGdiGetAppliedDeviceGammaRamp(HDC a1, _BYTE *a2)
{
  unsigned int v4; // edi
  ULONG v5; // ecx
  _WORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _WORD *v10; // rcx
  unsigned int i; // edx
  const void *v12; // rdx
  _BYTE *v13; // rdx
  _QWORD v14[6]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v15[136]; // [rsp+50h] [rbp-88h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v5 = 87;
LABEL_3:
    EngSetLastError(v5);
    return 0LL;
  }
  v7 = PALLOCMEM2(0x600uLL, 1886221383LL, 0);
  if ( !v7 )
  {
    v5 = 14;
    goto LABEL_3;
  }
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( !v14[0] || *(_DWORD *)(v14[0] + 32LL) )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v4 = 1;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15);
    DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v14);
    v8 = *(_QWORD **)(v14[0] + 48LL);
    v9 = v8[212];
    if ( v9 || v8[211] )
    {
      v12 = (const void *)v8[213];
      if ( !v12 )
      {
        v12 = (const void *)v8[212];
        if ( !v9 )
          v12 = (const void *)v8[211];
      }
      memmove(v7, v12, 0x600uLL);
    }
    else
    {
      v10 = v7 + 256;
      for ( i = 0; i < 0x100; ++i )
      {
        v10[256] = (_WORD)i << 8;
        *v10 = (_WORD)i << 8;
        *(v10 - 256) = (_WORD)i << 8;
        ++v10;
      }
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v15);
  }
  if ( v4 )
  {
    if ( ((unsigned __int8)a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v13 = (_BYTE *)MmUserProbeAddress;
    *v13 = *v13;
    v13[1535] = v13[1535];
    memmove(a2, v7, 0x600uLL);
  }
  Win32FreePool((__int64)v7);
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return v4;
}
