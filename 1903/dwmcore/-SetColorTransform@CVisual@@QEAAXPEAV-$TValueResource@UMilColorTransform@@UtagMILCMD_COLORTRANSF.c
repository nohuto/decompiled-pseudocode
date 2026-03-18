/*
 * XREFs of ?SetColorTransform@CVisual@@QEAAXPEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@@Z @ 0x1801C47E0
 * Callers:
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x1801C4004 (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFO.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180089300 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BAD3C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

__int64 __fastcall CVisual::SetColorTransform(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r10
  _DWORD *v3; // r11
  __int64 result; // rax
  char v6; // r10
  __int64 v7; // r11
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  __int64 v10; // r10

  v2 = 0LL;
  v3 = *(_DWORD **)(a1 + 224);
  result = *v3 & 0x1000000;
  if ( a2 )
  {
    if ( (_DWORD)result )
    {
      v8 = (unsigned int)v3[1];
      v9 = v3 + 2;
      for ( result = 0LL; (unsigned int)result < (unsigned int)v8; ++v9 )
      {
        if ( *v9 == 8 )
          break;
        result = (unsigned int)(result + 1);
      }
      if ( (unsigned int)result < (unsigned int)v8 )
      {
        v10 = 8LL * (unsigned int)result;
        result = ((_BYTE)v8 + 15) & 7;
        v2 = (_QWORD *)((char *)v3 + v10 - result + v8 + 15);
      }
      *v2 = a2;
    }
    else
    {
      result = (__int64)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(a1 + 224, 8);
      *(_QWORD *)result = a2;
    }
  }
  else if ( (_DWORD)result )
  {
    *v3 &= ~0x1000000u;
    result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v3, 8);
    if ( (unsigned int)result < *(_DWORD *)(v7 + 4) )
    {
      result = (unsigned int)result;
      *(_BYTE *)((unsigned int)result + v7 + 8) = v6;
    }
  }
  return result;
}
