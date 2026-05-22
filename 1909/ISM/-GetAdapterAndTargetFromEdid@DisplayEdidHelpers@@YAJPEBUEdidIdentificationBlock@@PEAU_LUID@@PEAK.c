/*
 * XREFs of ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x1800D2258
 * Callers:
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800A6A4C (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18009E924 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??8@YA_NAEBUEdidIdentificationBlock@@0@Z @ 0x1800D2164 (--8@YA_NAEBUEdidIdentificationBlock@@0@Z.c)
 *     ?GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z @ 0x1800D2618 (-GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z.c)
 */

__int64 __fastcall DisplayEdidHelpers::GetAdapterAndTargetFromEdid(
        DisplayEdidHelpers *this,
        LUID *a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  unsigned int DisplayConfigBufferSizes; // eax
  unsigned int v9; // eax
  struct EdidIdentificationBlock *v10; // r9
  unsigned int v11; // eax
  DISPLAYCONFIG_PATH_INFO *v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rbx
  UINT32 numModeInfoArrayElements; // [rsp+30h] [rbp-30h] BYREF
  DISPLAYCONFIG_PATH_INFO *pathArray; // [rsp+38h] [rbp-28h]
  void *modeInfoArray; // [rsp+40h] [rbp-20h]
  unsigned int v18[2]; // [rsp+48h] [rbp-18h] BYREF
  __int16 v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  UINT32 numPathArrayElements; // [rsp+98h] [rbp+38h] BYREF

  numPathArrayElements = 0;
  numModeInfoArrayElements = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
  if ( DisplayConfigBufferSizes )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             49LL,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
             (const char *)DisplayConfigBufferSizes);
  pathArray = (DISPLAYCONFIG_PATH_INFO *)operator new[](saturated_mul(numPathArrayElements, 0x48uLL));
  modeInfoArray = operator new[](saturated_mul(numModeInfoArrayElements, 0x40uLL));
  v9 = QueryDisplayConfig(
         2u,
         &numPathArrayElements,
         pathArray,
         &numModeInfoArrayElements,
         (DISPLAYCONFIG_MODE_INFO *)modeInfoArray,
         0LL);
  if ( v9 )
  {
    v11 = wil::details::in1diag3::Return_Win32(
            retaddr,
            62LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
            (const char *)v9);
    v12 = pathArray;
    v13 = v11;
  }
  else
  {
    v14 = 0LL;
    if ( numPathArrayElements )
    {
      while ( 1 )
      {
        *(_QWORD *)v18 = 0LL;
        v19 = 0;
        if ( (int)DisplayEdidHelpers::GetRawEdidIdentificationBlock(
                    *(DisplayEdidHelpers **)&pathArray[v14].sourceInfo.adapterId,
                    (struct _LUID)pathArray[v14].targetInfo.id,
                    (unsigned int)v18,
                    v10) >= 0
          && operator==((__int64)v18, (__int64)this) )
        {
          break;
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= numPathArrayElements )
          goto LABEL_9;
      }
      v12 = pathArray;
      *a2 = pathArray[v14].sourceInfo.adapterId;
      a3->LowPart = v12[v14].targetInfo.id;
    }
    else
    {
LABEL_9:
      v12 = pathArray;
    }
    v13 = 0;
  }
  if ( v12 )
    operator delete(v12, (const struct std::nothrow_t *)v12);
  if ( modeInfoArray )
    operator delete(modeInfoArray, (const struct std::nothrow_t *)v12);
  return v13;
}
