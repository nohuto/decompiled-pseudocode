/*
 * XREFs of bInitBRUSHOBJ @ 0x1C0263128
 * Callers:
 *     InitializeGre @ 0x1C0266238 (InitializeGre.c)
 * Callees:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C000EC68 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000ECA0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     GreCreateBitmap @ 0x1C0016C90 (GreCreateBitmap.c)
 *     GreDeleteObject @ 0x1C0018180 (GreDeleteObject.c)
 *     GreSetBrushOwner @ 0x1C001B890 (GreSetBrushOwner.c)
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0050160 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgModifyHandleType @ 0x1C00503D0 (HmgModifyHandleType.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C0050514 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     HmgMarkUndeletable @ 0x1C0050BB0 (HmgMarkUndeletable.c)
 *     GreCreatePatternBrushInternal @ 0x1C008CCA0 (GreCreatePatternBrushInternal.c)
 *     bInitBrush @ 0x1C0263080 (bInitBrush.c)
 */

__int64 bInitBRUSHOBJ()
{
  struct HOBJ__ **v0; // rbx
  struct HOBJ__ **v1; // rbx
  struct HOBJ__ **v2; // rbx
  struct HOBJ__ **v3; // rbx
  struct HOBJ__ **v4; // rbx
  DRIVER_CONTROL *v5; // rbx
  HBITMAP Bitmap; // rax
  struct HOBJ__ *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  ULONG NumberOfMapRegisters; // ecx
  unsigned __int64 *v11; // rbx
  struct HOBJ__ **v13[2]; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+40h] [rbp-10h]

  if ( !(unsigned int)bInitBrush(0, 0xFFFFFF, 7u, &qword_1C020CEB8, 0)
    || !(unsigned int)bInitBrush(4, 0, 7u, 0LL, 0)
    || !(unsigned int)bInitBrush(2, 8421504, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(3, 4210752, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(1, 12632256, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(5, 0, 0xCu, &gpbrNull, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v13, 0, 0xCu, 1, 0);
  v0 = v13[0];
  if ( v13[0] )
  {
    v14 = 1;
    BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v13);
    *((_DWORD *)v0 + 10) |= 0xC00u;
    *((_DWORD *)v0 + 44) = 5;
    *((_DWORD *)v0 + 42) = 1;
    HmgModifyHandleType((unsigned __int64)*v0 | 0x300000);
    bSetStockObject((unsigned __int64)*v0, 8, 0);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v0;
    BRUSHMEMOBJ::~BRUSHMEMOBJ(v13);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v13, 0, 7u, 1, 0);
    v1 = v13[0];
    if ( v13[0] )
    {
      v14 = 1;
      BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v13);
      *((_DWORD *)v1 + 10) |= 0xC00u;
      *(struct HOBJ__ **)((char *)v1 + 172) = 0LL;
      *((_DWORD *)v1 + 42) = 0;
      *((_WORD *)v1 + 92) = 0;
      v1[19] = 0LL;
      HmgModifyHandleType((unsigned __int64)*v1 | 0x300000);
      bSetStockObject((unsigned __int64)*v1, 7, 0);
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)*v1;
      qword_1C020CEC0 = (__int64)v1;
      BRUSHMEMOBJ::~BRUSHMEMOBJ(v13);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v13, 0xFFFFFF, 7u, 1, 0);
      v2 = v13[0];
      if ( v13[0] )
      {
        v14 = 1;
        BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v13);
        *((_DWORD *)v2 + 10) |= 0xC00u;
        *(struct HOBJ__ **)((char *)v2 + 172) = 0LL;
        *((_DWORD *)v2 + 42) = 0;
        *((_WORD *)v2 + 92) = 0;
        v2[19] = 0LL;
        HmgModifyHandleType((unsigned __int64)*v2 | 0x300000);
        bSetStockObject((unsigned __int64)*v2, 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ(v13);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v13, 0, 7u, 1, 0);
        v3 = v13[0];
        if ( v13[0] )
        {
          v14 = 1;
          BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v13);
          *((_DWORD *)v3 + 10) |= 0xC00u;
          *(struct HOBJ__ **)((char *)v3 + 172) = 0LL;
          *((_DWORD *)v3 + 42) = 0;
          *((_WORD *)v3 + 92) = 0;
          v3[19] = 0LL;
          HmgModifyHandleType((unsigned __int64)*v3 | 0x300000);
          bSetStockObject((unsigned __int64)*v3, 19, 0);
          WPP_MAIN_CB.Queue.ListEntry.Flink = (struct _LIST_ENTRY *)v3;
          BRUSHMEMOBJ::~BRUSHMEMOBJ(v13);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v13, 0, 9u, 0, 0);
          v4 = v13[0];
          if ( v13[0] )
          {
            v14 = 1;
            BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v13);
            WPP_MAIN_CB.Queue.Wcb.DeviceContext = v4;
            BRUSHMEMOBJ::~BRUSHMEMOBJ(v13);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v13, 0xFFFFFF, 0xBu, 0, 0);
            v5 = (DRIVER_CONTROL *)v13[0];
            if ( v13[0] )
            {
              v14 = 1;
              BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v13);
              WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = v5;
              BRUSHMEMOBJ::~BRUSHMEMOBJ(v13);
              Bitmap = (HBITMAP)GreCreateBitmap(8, 8, 1u, 1u, (__int64)&unk_1C020D4A8);
              v7 = (struct HOBJ__ *)Bitmap;
              if ( !Bitmap )
                return 0LL;
              *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = GreCreatePatternBrushInternal(Bitmap, 0, 0);
              if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
                return 0LL;
              GreDeleteObject(v7, v8);
              GreSetBrushOwner(*(HBRUSH *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 0);
              v9 = HmgShareLockCheck(WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 16);
              if ( !v9 )
                return 0LL;
              NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
              *(_DWORD *)(v9 + 40) |= 0x200u;
              HmgMarkUndeletable(NumberOfMapRegisters, 16);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v13, 0xFFFFFF, 7u, 0, 0);
              v11 = (unsigned __int64 *)v13[0];
              if ( v13[0] )
              {
                v14 = 1;
                BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v13);
                bSetStockObject(*v11, 18, 0);
                WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)v11;
                BRUSHMEMOBJ::~BRUSHMEMOBJ(v13);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v13);
  return 0LL;
}
