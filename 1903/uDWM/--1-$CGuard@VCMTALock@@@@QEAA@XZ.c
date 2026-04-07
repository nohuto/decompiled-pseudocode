/*
 * XREFs of ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180048254
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x1800376A0 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180046C90 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x180047A70 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x180047AE0 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x180047D60 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?GetPixelFormatInfo@CBitmapLock@@UEBA?AUPixelFormatInfo@@XZ @ 0x180047E80 (-GetPixelFormatInfo@CBitmapLock@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x1800481D0 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?UnlockState@CCompressedSourceBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x18004DBD0 (-UnlockState@CCompressedSourceBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800B8D50 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x1800B91A0 (-GetResolution@CBitmap@@UEAAJPEAN0@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x1800B9230 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x1800B9440 (-Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1800B97A0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x1800B9820 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
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
