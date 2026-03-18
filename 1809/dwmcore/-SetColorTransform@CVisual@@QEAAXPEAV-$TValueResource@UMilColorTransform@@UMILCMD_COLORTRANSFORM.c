/*
 * XREFs of ?SetColorTransform@CVisual@@QEAAXPEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@@Z @ 0x1801B82CC
 * Callers:
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x1801B781C (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x18005D2D4 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18005D39C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

__int64 __fastcall CVisual::SetColorTransform(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  _QWORD *v3; // r11
  _DWORD *v5; // r10
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r10
  char v9; // r11
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 v12; // r11

  v2 = (__int64 *)(a1 + 224);
  v3 = 0LL;
  v5 = (_DWORD *)*v2;
  result = *(unsigned int *)*v2;
  if ( a2 )
  {
    if ( (result & 0x1000000) != 0 )
    {
      v10 = (unsigned int)v5[1];
      v11 = v5 + 2;
      for ( result = 0LL; (unsigned int)result < (unsigned int)v10; ++v11 )
      {
        if ( *v11 == 8 )
          break;
        result = (unsigned int)(result + 1);
      }
      if ( (unsigned int)result < (unsigned int)v10 )
      {
        v12 = 8LL * (unsigned int)result;
        result = ((_BYTE)v10 + 15) & 7;
        v3 = (_QWORD *)((char *)v5 + v10 + v12 - result + 15);
      }
      *v3 = a2;
    }
    else
    {
      result = (__int64)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 8);
      *(_QWORD *)result = a2;
    }
  }
  else if ( (result & 0x1000000) != 0 )
  {
    v7 = *v2;
    *v5 = result & 0xFEFFFFFF;
    result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v7, 8);
    if ( (unsigned int)result < *(_DWORD *)(v8 + 4) )
    {
      result = (unsigned int)result;
      *(_BYTE *)((unsigned int)result + v8 + 8) = v9;
    }
  }
  return result;
}
