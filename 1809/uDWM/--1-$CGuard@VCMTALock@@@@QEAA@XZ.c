/*
 * XREFs of ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180037F94
 * Callers:
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180037F10 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180047A70 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x180048D00 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x18004B4E0 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x18004B610 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x18004B7D0 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?UnlockState@CCompressedSourceBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x18004B850 (-UnlockState@CCompressedSourceBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?GetPixelFormatInfo@CBitmapLock@@UEBA?AUPixelFormatInfo@@XZ @ 0x18004B9A0 (-GetPixelFormatInfo@CBitmapLock@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800B2B80 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x1800B2FE0 (-GetResolution@CBitmap@@UEAAJPEAN0@Z.c)
 *     ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x1800B3260 (-Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1800B35C0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x1800B3640 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGuard<CMTALock>::~CGuard<CMTALock>(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 48) )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
    *a1 = 0LL;
  }
}
