/*
 * XREFs of ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x1C0096FAC
 * Callers:
 *     ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0096EF4 (-Create@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Create@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C009700C (-Create@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C0098014 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C009805C (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<24576,96>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rax
  bool result; // al

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x6000, a2);
  a1[2] = Section;
  result = 0;
  if ( Section )
  {
    if ( (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x6000, v4) >= 0 )
    {
      v5 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Create(a1[3]);
      a1[4] = v5;
      if ( v5 )
        return 1;
    }
  }
  return result;
}
