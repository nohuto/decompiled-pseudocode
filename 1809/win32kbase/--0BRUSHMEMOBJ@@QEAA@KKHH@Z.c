/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00436E0
 * Callers:
 *     hCreateSolidBrushInternal @ 0x1C0043620 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C021AB6C (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C021AC18 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C001D600 (HmgRemoveObject.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C001EE44 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C001F078 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00210C0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0023860 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C005F744 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C006B0CC (HmgAllocateObjectAttr.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C007E92C (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C007FCDC (HmgFreeObjectAttr.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ @ 0x1C00A9754 (--0-$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00F5DF8 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(BRUSHMEMOBJ *this, int a2, unsigned int a3, int a4, int a5)
{
  struct BRUSH *v9; // rax
  ULONG_PTR v10; // rbx
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  char v17; // r15
  _QWORD *ObjectAttr; // rdi
  __int64 v20; // [rsp+48h] [rbp-70h] BYREF
  int v21; // [rsp+50h] [rbp-68h]
  _BYTE v22[88]; // [rsp+60h] [rbp-58h] BYREF

  *((_DWORD *)this + 2) = 0;
  UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>::UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>((char *)this + 16);
  if ( a3 <= 0xC )
  {
    v9 = BRUSHMEMOBJ::pbrAllocBrush(this, a4);
    v10 = (ULONG_PTR)v9;
    *(_QWORD *)this = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 19) = a2;
      *((_DWORD *)v9 + 20) = a3;
      *((_QWORD *)v9 + 3) = 0LL;
      **((_DWORD **)v9 + 6) = 0;
      if ( a3 >= 6 )
      {
        v11 = a3 - 6;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  v16 = v15 - 1;
                  if ( v16 )
                  {
                    if ( v16 == 1 )
                      *((_DWORD *)v9 + 10) = 256;
                  }
                  else
                  {
                    *((_DWORD *)v9 + 10) = 22;
                  }
                }
                else
                {
                  *((_DWORD *)v9 + 10) = 18;
                }
              }
              else
              {
                *((_DWORD *)v9 + 10) = 21;
              }
            }
            else
            {
              *((_DWORD *)v9 + 10) = 17;
            }
          }
          else
          {
            *((_DWORD *)v9 + 10) = 20;
          }
        }
        else
        {
          *((_DWORD *)v9 + 10) = 16;
        }
      }
      else
      {
        *((_DWORD *)v9 + 10) = 32802;
      }
      v17 = 0;
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
      if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v22, (struct OBJECT *)v10, 1u, 0, 0x10u) )
      {
        if ( a5 )
        {
          ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
          if ( ObjectAttr )
          {
            v20 = 0LL;
            v21 = 0;
            HANDLELOCK::bLockHobj((HANDLELOCK *)&v20, *(struct HOBJ__ **)v10, 16);
            if ( v21 )
            {
              *ObjectAttr = *(_QWORD *)(v10 + 72);
              *(_QWORD *)(v20 + 16) = ObjectAttr;
              *(_QWORD *)(v10 + 48) = ObjectAttr;
              HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
            }
            HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v20);
          }
        }
      }
      else
      {
        v17 = 1;
        *(_QWORD *)this = 0LL;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
      if ( v17 )
        FreeBrushMemory(v10);
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
